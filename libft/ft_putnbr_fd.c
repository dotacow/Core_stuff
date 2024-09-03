/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:38:48 by yokitane          #+#    #+#             */
/*   Updated: 2024/09/03 20:24:22 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

void	ft_putnbr_fd(int nb, int fd)
{
	char	c[11];

	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	storearr(nb, c);
	write(fd, c, ft_getlen(nb));
}
