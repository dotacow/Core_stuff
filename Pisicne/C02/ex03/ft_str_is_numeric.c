/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:08:35 by yokitane          #+#    #+#             */
/*   Updated: 2024/07/20 13:28:57 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if ((*str < '0' || *str > '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
