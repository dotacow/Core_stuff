/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalzoubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 10:45:26 by aalzoubi          #+#    #+#             */
/*   Updated: 2024/07/20 11:56:13 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y);

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((i == 1 || i == x) && (j == 1 || j == y))
				ft_putchar('o');
			else if ((i == 1 || i == x))
				ft_putchar('|');
			else if ((j == 1 || j == y))
				ft_putchar('-');
			else
				ft_putchar(' ');
			i++;
		}
		j++;
		write(1, "\n", 1);
	}
}
