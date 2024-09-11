/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 20:41:47 by yokitane          #+#    #+#             */
/*   Updated: 2024/07/29 12:33:25 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc == 1)
		return (0);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[argc - i][j] != '\0' && i < argc)
		{
			write(1, &argv[argc - i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
