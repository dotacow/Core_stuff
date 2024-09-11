/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:01:07 by yokitane          #+#    #+#             */
/*   Updated: 2024/08/06 17:08:32 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	"ft_stock_str.h"

#include	<stdlib.h>
#include	<stdio.h>
#include	"ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_dup(char *src)
{
	int		i;
	char	*dup;

	dup = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*sarr;

	sarr = malloc (sizeof(t_stock_str) * (ac + 1));
	if (sarr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		sarr[i].str = av[i];
		sarr[i].size = ft_strlen(av[i]);
		sarr[i].copy = ft_dup(av[i]);
		i++;
	}
	sarr[i].str = 0;
	return (sarr);
}
