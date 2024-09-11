/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:44:49 by yokitane          #+#    #+#             */
/*   Updated: 2024/07/30 11:37:14 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	print(char str[])
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (*s1 - *s2);
}

void	ft_sort(char *argv[])
{
	int		ic;
	int		jc;
	char	*temp;

	ic = 1;
	jc = 2;
	while (argv[ic] != NULL)
	{
		while (argv[jc] != NULL)
		{
			if (ft_strcmp(argv[ic], argv[jc]) > 0)
			{
				temp = argv[jc];
				argv[jc] = argv[ic];
				argv[ic] = temp;
			}
			jc++;
		}
		print(argv[ic]);
		jc = ic + 1;
		ic++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
		ft_sort(argv);
	return (0);
}
