/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_helpers.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:29:24 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/03 18:29:26 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_HELPERS_H
# define STR_HELPERS_H

int		str_length(const char *str);
char	*str_copy_heap(const char *str);
char	*str_concat_2_words_heap(const char *str1, const char *str2);

#endif
