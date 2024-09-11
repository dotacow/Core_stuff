/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:45:08 by yokitane          #+#    #+#             */
/*   Updated: 2024/07/27 16:52:05 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	ft_getlen(int nb)
{
	int	n;
	int	i;

	i = 0;
	n = nb;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	storearr(int nb, char *c)
{
	int	i;

	i = ft_getlen(nb);
	while (i > 0)
	{
		c[i - 1] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
}

void	ft_putnbr(int nb)
{
	char	c[11];

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	storearr(nb, c);
	write(1, c, ft_getlen(nb));
}
/*int main(void)
{
	ft_putnbr(-248348);
}*/
