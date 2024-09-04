/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:28:24 by yokitane          #+#    #+#             */
/*   Updated: 2024/09/04 19:16:55 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (!s[0])
		return (0);
	if (s[0] != c)
		count++;
	while (s[i + 1])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

char	*ft_reserve(size_t count, char **words, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (i < count)
	{
		len = 0;
		while (s[j] == c)
			j++;
		while (s[j] != c)
		{
			len++;
			j++;
		}
		words[i] = malloc(len + 1);
		if (!words[i])
		{
			return (NULL);
			free(words);
		}
		i++;
	}
	return (NULL);
}

void	ft_fill(size_t count, char **words, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (i < count)
	{
		k = 0;
		while (s[j] == c)
			j++;
		while (s[j] != c)
		{
			words[i][k] = s[j];
			k++;
			j++;
		}
		words[i][k] = '\0';
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**words;

	count = ft_count_words(s, c);
	words = malloc((sizeof(char *) * count) + 1);
	if (!words)
		return (NULL);
	words[count] = NULL;
	ft_reserve(count, words, s, c);
	ft_fill(count, words, s, c);
	return (words);
}
// int	main(void)
// {
// 	char	**words;
// 	int		i;
// 	i = 0;
// 	words = ft_split("",'z');
// 	while(words[i])
// 	{
// 		printf("%s",words[i]);
// 		 	printf("\n");
// 		i++;
// 	}
// 	return (0);
// }