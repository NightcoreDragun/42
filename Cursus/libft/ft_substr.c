/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:05:26 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 14:06:48 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static size_t	get_substr_len(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (0);
	if (len > s_len - start)
		return (s_len - start);
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	substr_len;
	size_t	i;

	if (!s)
		return (NULL);
	substr_len = get_substr_len(s, start, len);
	substr = (char *)malloc(sizeof(char) * (substr_len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < substr_len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
