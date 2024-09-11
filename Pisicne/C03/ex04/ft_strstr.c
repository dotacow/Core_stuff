/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:30:54 by yokitane          #+#    #+#             */
/*   Updated: 2024/07/23 17:07:39 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stddef.h>
#include	<stdio.h>
#include	<unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*s1 && *s2 && i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		++s1;
		++s2;
		++i;
	}
	if (i == n)
	{
		--s1;
		--s2;
	}
	return (*s1 - *s2);
}

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	s;

	if (to_find[0] == '\0')
		return (str);
	s = ft_strlen(to_find);
	while (*str != '\0')
	{
		if (ft_strncmp(str, to_find, s) == 0)
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}

/*int	main(void)
{
	char str[] = "awsaws";
	char to_find[] = "sa";

	printf("%s\n",ft_strstr(str, to_find));
}*/
