/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:29:24 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/03 14:00:34 by falhaimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "humanize.h"

int	is_valid_arg(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}

void	print_error(void)
{
	write(2, "Error\n", 6);
}

int	main(int argc, char **argv)
{
	char	*res;
	int		i;

	if (argc == 2 && is_valid_arg(argv[1]) == 1)
	{
		res = humanize(argv[1]);
		if (res == NULL)
		{
			print_error();
			return (1);
		}
		i = 0;
		while (res[i] != '\0')
		{
			write(1, &res[i], 1);
			i++;
		}
		free(res);
		return (0);
	}
	print_error();
	return (1);
}
