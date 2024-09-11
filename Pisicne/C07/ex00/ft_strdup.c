/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:58:46 by yokitane          #+#    #+#             */
/*   Updated: 2024/07/30 12:28:37 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	<stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		n;
	char	*dest;

	n = 0;
	i = 0;
	while (src[n] != '\0')
	{
		n++;
	}
	dest = (char *) malloc(n * sizeof (char));
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	printf("%s", ft_strdup("hello"));
}*/
