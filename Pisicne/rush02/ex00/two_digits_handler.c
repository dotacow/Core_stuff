/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_digits_handler.c                               :+:      :+:    :+:   */
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

char	*field_with_zeros_heap(char n, int zeros_count)
{
	char	*res;
	int		i;

	res = malloc(sizeof(char) * (zeros_count + 2));
	res[0] = n;
	i = 1;
	while (i <= zeros_count)
	{
		res[i] = '0';
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*two_digits_handler_heap(char *nbr_as_str)
{
	char	*tens;
	char	*field_tens_txt;
	char	*field_ones_txt;

	if (nbr_as_str[0] == '0' && nbr_as_str[1] == '0')
	{
		field_tens_txt = str_copy_heap("");
		return (field_tens_txt);
	}
	if (nbr_as_str[0] == '1')
	{
		field_tens_txt = dictionary(nbr_as_str);
		field_tens_txt = str_copy_heap(field_tens_txt);
		return (field_tens_txt);
	}
	tens = field_with_zeros_heap(nbr_as_str[0], 1);
	field_tens_txt = dictionary(tens);
	field_ones_txt = &nbr_as_str[1];
	field_ones_txt = dictionary(field_ones_txt);
	free(tens);
	if (nbr_as_str[1] == '0')
		return (str_concat_2_words_heap(field_tens_txt, ""));
	else
		return (str_concat_2_words_heap(field_tens_txt, field_ones_txt));
}
