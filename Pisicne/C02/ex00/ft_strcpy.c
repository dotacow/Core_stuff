/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:15:49 by yokitane          #+#    #+#             */
/*   Updated: 2024/07/20 19:10:38 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	n;
	int	i;

	i = 0;
	n = ft_strlen(src);
	while (n >= 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
/*
int main()
{
	char src[] = "xd";
	char dest[] = "ab";
	ft_strcpy(dest,src);
	write(1, src, 1);
	write(1, src+1, 1);
	write(1, dest, 1);
	write(1, dest+1, 1);
}*/
