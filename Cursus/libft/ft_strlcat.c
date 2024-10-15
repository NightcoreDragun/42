/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:51:29 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 13:52:28 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/**
 * ft_strlcat - Concatène deux chaînes avec un contrôle de taille
 * @dst: Pointeur vers la chaîne de destination
 * @src: Pointeur vers la chaîne source
 * @dstsize: Taille totale du buffer de destination
 *
 * Cette fonction concatène la chaîne `src` à la chaîne `dst`, mais ne copie
 * que jusqu'à un certain nombre de caractères de `src`, afin de s'assurer que
 * le buffer de destination n'est jamais dépassé et reste correctement terminé
 * par un caractère nul `\0`.
 *
 * Le contrôle de taille sert à éviter les débordements de mémoire. En effet,
 * si `dstsize` (la taille totale allouée pour `dst`) est trop petite pour
 * accueillir la totalité de `dst` et `src`, la fonction ne copie que le nombre
 * de caractères de `src` qui rentrent dans `dstsize`, tout en laissant de la
 * place pour le `\0` de fin.
 *
 * Points importants :
 * 1. Si `dstsize` est plus petit ou égal à la longueur de `dst` (la chaîne de
 *    destination), cela signifie qu'il n'y a pas assez de place pour concaténer
 *    `src`. Dans ce cas, la fonction ne fait aucune copie et retourne la
 *    longueur totale que la chaîne finale aurait dû avoir (la longueur de `dst`
 *    plus la longueur de `src`).
 *
 * 2. Si `dstsize` est suffisamment grand pour contenir `dst` et `src`, la
 *    fonction concatène les deux chaînes et garantit que la chaîne résultante
 *    est terminée par un `\0`.
 *
 * 3. La fonction retourne la longueur totale que la chaîne finale aurait dû
 *    avoir, même si la chaîne a été tronquée faute d'espace suffisant. Cela
 *    permet de savoir si la chaîne a été entièrement copiée ou non.
 *
 * Exemple d'utilisation :
 * Si vous avez un buffer de destination de 10 octets, et que `dst` contient
 * déjà 8 caractères, la fonction ne copiera que 1 caractère de `src`, et
 * ajoutera un `\0` à la fin, car il n'y a plus de place dans le buffer.
 *
 * Retourne : La longueur totale que la chaîne concaténée aurait dû avoir
 * (longueur de `dst` + longueur de `src`).
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = 0;
	while (src[i] && (dst_len + i) < (dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
