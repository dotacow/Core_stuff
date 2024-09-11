/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 17:40:07 by yokitane          #+#    #+#             */
/*   Updated: 2024/07/27 21:06:18 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	temp;

	if (nb < 0)
		return (0);
	temp = 1;
	i = 1;
	while (i <= nb)
	{
		temp = temp * i;
		i++;
	}
	return (temp);
}
/*int	main(void)
{
	printf("%d",ft_iterative_factorial(33));
}*/
