/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:41:47 by apalalau          #+#    #+#             */
/*   Updated: 2024/08/21 12:41:50 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char			src[] = "Hello, World!";
// 	char			dest[50];
// 	unsigned int	n;

// 	n = 10;

// 	for (int i = 0; i < 50; i++)
// 	{
// 		dest[i] = '\0';
// 	}

// 	printf("ft_strncpy: %s\n", ft_strncpy(dest, src, n));
// 	return (0);
// }
