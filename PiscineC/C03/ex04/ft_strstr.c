/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:05:08 by apalalau          #+#    #+#             */
/*   Updated: 2024/08/28 12:05:13 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!*to_find)
		return (str);
	while (*(str + i))
	{
		j = 0;
		while (*(str + i + j) == *(to_find + j))
		{
			if (!*(to_find + j + 1))
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
