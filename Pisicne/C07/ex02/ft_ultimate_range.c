/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:57:42 by yokitane          #+#    #+#             */
/*   Updated: 2024/08/02 15:59:13 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ptr;

	if (max - min <= 0)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	ptr = malloc((max - min) * sizeof(int));
	if (ptr == NULL)
		return (-1);
	while (min + i < max)
	{
		ptr[i] = min + i;
		i++;
	}
	*range = ptr;
	return (i);
}
