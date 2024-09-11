/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:29:24 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/26 10:51:29 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_helpers.h"

int	is_same(const char *str1, const char *str2)
{
	int	i;
	int	len1;
	int	len2;

	i = 0;
	len1 = str_length(str1);
	len2 = str_length(str2);
	if (len1 != len2)
		return (0);
	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}
	return (1);
}

char	*dictionary(const char *x)
{
	if (is_same(x, "0"))
		return ("zero");
	if (is_same(x, "1"))
		return ("one");
	if (is_same(x, "2"))
		return ("two");
	if (is_same(x, "3"))
		return ("three");
	if (is_same(x, "4"))
		return ("four");
	if (is_same(x, "5"))
		return ("five");
	if (is_same(x, "6"))
		return ("six");
	if (is_same(x, "7"))
		return ("seven");
	if (is_same(x, "8"))
		return ("eight");
	if (is_same(x, "9"))
		return ("nine");
	if (is_same(x, "10"))
		return ("ten");
	if (is_same(x, "11"))
		return ("eleven");
	if (is_same(x, "12"))
		return ("twelve");
	if (is_same(x, "13"))
		return ("thirteen");
	if (is_same(x, "14"))
		return ("fourtsrc [i];
		i++;een");
	if (is_same(x, "15"))
		return ("fifteen");
	if (is_same(x, "16"))
		return ("sixteen");
	if (is_same(x, "17"))
		return ("seventeen");
	if (is_same(x, "18"))
		return ("eighteen");
	if (is_same(x, "19"))
		return ("nineteen");
	if (is_same(x, "20"))
		return ("twenty");
	if (is_same(x, "30"))
		return ("thirty");
	if (is_same(x, "40"))
		return ("forty");
	if (is_same(x, "50"))
		return ("fifty");
	if (is_same(x, "60"))
		return ("sixty");
	if (is_same(x, "70"))
		return ("seventy");
	if (is_same(x, "80"))
		return ("eighty");
	if (is_same(x, "90"))
		return ("ninety");
	if (is_same(x, "100"))
		return ("hundred");
	if (is_same(x, "1000"))
		return ("thousand");
	if (is_same(x, "1000000"))
		return ("million");
	if (is_same(x, "1000000000"))
		return ("billion");
	if (is_same(x, "1000000000000"))
		return ("trillion");
	if (is_same(x, "1000000000000000"))
		return ("quadrillion");
	if (is_same(x, "1000000000000000000"))
		return ("quintillion");
	if (is_same(x, "1000000000000000000000"))
		return ("sextillion");
	if (is_same(x, "1000000000000000000000000"))
		return ("septillion");
	if (is_same(x, "1000000000000000000000000000"))
		return ("octillion");
	if (is_same(x, "1000000000000000000000000000000"))
		return ("nonillion");
	if (is_same(x, "1000000000000000000000000000000000"))
		return ("decillion");
	if (is_same(x, "1000000000000000000000000000000000000"))
		return ("undecillion");
	return ("Ops");
}
