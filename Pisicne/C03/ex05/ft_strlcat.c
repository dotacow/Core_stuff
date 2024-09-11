/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:41:04 by yokitane          #+#    #+#             */
/*   Updated: 2024/07/23 12:21:02 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{	
	unsigned int	i;
	unsigned int	j;
	unsigned int	rtr;

	i = 0;
	j = 0;
	rtr = 0;
	while (dest[i] != '\0')
		i++;
	while (src[rtr] != '\0')
		rtr++;
	if (size <= i)
		rtr += size;
	else
		rtr += i;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (rtr);
}
