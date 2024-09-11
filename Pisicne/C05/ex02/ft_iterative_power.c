/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 11:23:40 by yokitane          #+#    #+#             */
/*   Updated: 2024/07/28 11:47:57 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	temp;

	temp = nb;
	i = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		nb = nb * temp;
		i++;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_power(-4,3));
}*/
