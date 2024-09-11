/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:29:24 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/03 14:08:12 by falhaimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "dictionary.h"
#include "str_helpers.h"
#include "two_digits_handler.h"
#include "three_digits_handler.h"
#include "four_and_more_digits_handler.h"

char	*str_remove_zeros(char *nbr_as_str)
{
	while (*nbr_as_str == '0')
		nbr_as_str++;
	return (nbr_as_str);
}

char	*handle_less_than_4_digits(int len, char *nbr_as_str)
{
	char	*res;

	if (len == 1)
	{
		res = dictionary(nbr_as_str);
		res = str_copy_heap(res);
	}
	else if (len == 2)
		res = two_digits_handler_heap(nbr_as_str);
	if (len == 3)
		res = three_digits_handler_heap(nbr_as_str);
	return (res);
}

char	*humanize(char *nbr_as_str)
{
	int		len;
	char	*res;

	nbr_as_str = str_remove_zeros(nbr_as_str);
	if (*nbr_as_str == '\0')
	{
		res = dictionary("0");
		res = str_copy_heap(res);
		return (res);
	}
	len = str_length(nbr_as_str);
	if (len >= 4)
		res = four_digits_handler_heap(nbr_as_str, len);
	else
		res = handle_less_than_4_digits(len, nbr_as_str);
	return (res);
}
