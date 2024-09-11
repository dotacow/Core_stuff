/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_and_more_digits_handler.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:29:24 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/03 18:29:26 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "dictionary.h"
#include "str_helpers.h"
#include "two_digits_handler.h"
#include "three_digits_handler.h"

char	*num_to_text_heap(char *nbr_as_str, int digits_in_part)
{
	char	*num;
	char	*res;

	if (digits_in_part == 1)
		return (handle_one(nbr_as_str));
	else if (digits_in_part == 2)
	{
		num = malloc(sizeof(char) * 3);
		num[0] = nbr_as_str[0];
		num[1] = nbr_as_str[1];
		num[2] = '\0';
		res = two_digits_handler_heap(num);
		free(num);
	}
	else if (digits_in_part == 3)
	{
		num = malloc(sizeof(char) * 4);
		num[0] = nbr_as_str[0];
		num[1] = nbr_as_str[1];
		num[2] = nbr_as_str[2];
		num[3] = '\0';
		res = three_digits_handler_heap(num);
		free(num);
	}
	return (res);
}

/*
abc[0] = int prefix_counter
abc[1] = int threes_counter
abc[2] = int digits_in_part
*/
char	*get_part_result_heap(int abc[], char *nbr_as_str, char **postfixes)
{
	char	*part_result;
	int		prefix_counter;
	int		threes_counter;
	int		digits_in_part;

	prefix_counter = abc[0];
	threes_counter = abc[1];
	digits_in_part = abc[2];
	if (prefix_counter != threes_counter)
		digits_in_part = 3;
	part_result = num_to_text_heap(nbr_as_str, digits_in_part);
	if (*part_result != '\0' && *postfixes[prefix_counter - 1] != '\0')
		part_result = str_concat_2_words_heap(part_result,
				dictionary(postfixes[prefix_counter - 1]));
	return (part_result);
}

char	**get_postfixes_heap(int len)
{
	int		threes_counter;
	int		i;
	int		j;
	char	**parts;

	threes_counter = len / 3;
	if (threes_counter % 3 != 0)
		threes_counter++;
	parts = (char **)malloc((threes_counter) * sizeof(char *));
	parts[0] = (char *)malloc(1 * sizeof(char));
	parts[0][0] = '\0';
	i = 1;
	while (i < threes_counter)
	{
		parts[i] = (char *)malloc(((i * 3) + 2) * sizeof(char));
		parts[i][0] = '1';
		j = 1;
		while (j < ((i * 3) + 1))
			parts[i][j++] = '0';
		parts[i][j] = '\0';
		i++;
	}
	return (parts);
}

void	fill_abc(int *abc, int len)
{
	abc[1] = len / 3;
	abc[2] = len % 3;
	if (abc[2] != 0)
		abc[1]++;
	else
		abc[2] = 3;
}

char	*four_digits_handler_heap(char *nbr_as_str, int len)
/*
abc[0] = prefix_counter;
abc[1] = threes_counter;
abc[2] = digits_in_part;
*/
{
	char	*part_result;
	char	**postfixes;
	int		abc[3];
	char	*res;
	int		i;

	fill_abc(abc, len);
	postfixes = get_postfixes_heap(len);
	res = "";
	abc[0] = abc[1];
	while (abc[0] > 0)
	{
		part_result = get_part_result_heap(abc, nbr_as_str, postfixes);
		i = 0;
		while (i++ < abc[2])
			nbr_as_str++;
		abc[0]--;
		res = str_concat_2_words_heap(res, part_result);
		free(part_result);
		abc[2] = 3;
	}
	free(postfixes);
	return (res);
}
