/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_length.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:29:24 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/03 18:29:26 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_length(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*str_copy_heap(const char *str)
{
	int		len;
	int		i;
	char	*res;

	len = str_length(str) + 1;
	i = 0;
	res = malloc(sizeof(char) * len);
	while (i < len)
	{
		res[i] = str[i];
		i++;
	}
	return (res);
}

char	*str_concat_2_words_heap_internal(
	const char *str1, const char *str2, int len1, int len2)
{
	int		i;
	char	*result;

	result = (char *)malloc(sizeof(char) * (len1 + len2 + 2));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		result[i] = str1[i];
		i++;
	}
	result[i] = ' ';
	i = 0;
	while (i < len2)
	{
		result[len1 + i + 1] = str2[i];
		i++;
	}
	result[len1 + len2 + 1] = '\0';
	return (result);
}

char	*str_concat_2_words_heap(const char *str1, const char *str2)
{
	int		len1;
	int		len2;

	len1 = str_length(str1);
	len2 = str_length(str2);
	if (len1 == 0)
		return (str_copy_heap(str2));
	if (len2 == 0)
		return (str_copy_heap(str1));
	if (len1 == 0 && len2 == 0)
		return (str_copy_heap(""));
	return (str_concat_2_words_heap_internal(str1, str2, len1, len2));
}
