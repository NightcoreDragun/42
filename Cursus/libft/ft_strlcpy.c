/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:52:38 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 13:54:18 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/**
 * ft_strlcpy - Copie une chaîne source dans une destination de taille limitée
 * @dst: Pointeur vers la chaîne de destination
 * @src: Pointeur vers la chaîne source
 * @dstsize: Taille du buffer de destination
 *
 * Cette fonction copie jusqu'à `dstsize - 1` caractères de la chaîne `src`
 * dans la chaîne `dst`, en ajoutant toujours un caractère nul (`'\0'`) à la fin
 * de la chaîne destination. Si `dstsize` vaut 0, aucun caractère n'est copié
 * mais la longueur totale de la chaîne source est toujours calculée.
 *
 * Retourne la longueur totale de la chaîne source `src`, permettant de savoir
 * si la chaîne source a été tronquée dans la destination.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[src_len])
		src_len++;
	return (src_len);
}
