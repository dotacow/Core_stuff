/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_digits_handler.c                             :+:      :+:    :+:   */
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

char	*handle_hunder(char *hund)
{
	char	hund_digit_0[2];
	char	*hund_digit_0_text;
	char	*hund_text;
	char	*res;

	if (hund[0] == '0')
		return ("");
	else if (hund[0] == '1')
	{
		res = dictionary(hund);
		res = str_copy_heap(res);
		return (res);
	}
	else
	{
		hund_digit_0[0] = hund[0];
		hund_digit_0[1] = '\0';
		hund_digit_0_text = dictionary(hund_digit_0);
		hund_text = dictionary("100");
		return (str_concat_2_words_heap(hund_digit_0_text, hund_text));
	}
}

char	*three_digits_handler_heap(char *nbr_as_str)
{
	char	*hund;
	char	tens[3];
	char	ones[2];
	char	*field_hund_txt;
	char	*field_tens_txt;

	hund = field_with_zeros_heap(nbr_as_str[0], 2);
	field_hund_txt = handle_hunder(hund);
	tens[0] = nbr_as_str[1];
	tens[1] = nbr_as_str[2];
	tens[2] = '\0';
	if (tens[0] == '0' && tens[1] != '0')
	{
		ones[0] = tens[1];
		ones[1] = '\0';
		field_tens_txt = dictionary(ones);
		field_tens_txt = str_copy_heap(field_tens_txt);
	}
	else
		field_tens_txt = two_digits_handler_heap(tens);
	free(hund);
	return (str_concat_2_words_heap(field_hund_txt, field_tens_txt));
}

char	*handle_one(char *nbr_as_str)
{
	char	*num;
	char	*res;

	num = malloc(sizeof(char) * 2);
	num[0] = nbr_as_str[0];
	num[1] = '\0';
	res = dictionary(num);
	res = str_copy_heap(res);
	free(num);
	return (res);
}
