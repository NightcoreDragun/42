/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:59:30 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 13:00:33 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * ft_memset - Remplit une zone mémoire avec une valeur donnée
 * @b: Pointeur vers la zone mémoire à remplir
 * @c: La valeur à copier (convertie en unsigned char)
 * @len: Nombre d'octets à remplir avec la valeur
 *
 * Cette fonction remplit les `len` premiers octets de la zone mémoire
 * pointée par `b` avec la valeur `c`, qui est convertie en unsigned char.
 * Elle retourne un pointeur vers la zone mémoire initiale `b`.
 *
 * Retourne un pointeur vers `b`.
 */
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
