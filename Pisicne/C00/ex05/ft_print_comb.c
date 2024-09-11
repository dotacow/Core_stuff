/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:49:13 by yokitane          #+#    #+#             */
/*   Updated: 2024/07/17 18:09:08 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_print_int(int a, int b, int c)

{	
	char	d;

	d = a + '0';
	write(1, &d, 1);
	d = b + '0';
	write(1, &d, 1);
	d = c + '0';
	write(1, &d, 1);
	if (a != 7)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)

{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (chttps://youtu.be/F9-yqoS7b8w?si=VmyMiwrhBtPPDXoW <= 9)
			{
				ft_print_int(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
