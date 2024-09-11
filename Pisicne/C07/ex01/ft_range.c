/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:44:19 by yokitane          #+#    #+#             */
/*   Updated: 2024/07/30 17:00:33 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	<stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*dest;
	int	range;

	range = max - min;
	if (max <= min)
		return (NULL);
	i = 0;
	dest = malloc(range * sizeof(int));
	while (min + i < max)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
