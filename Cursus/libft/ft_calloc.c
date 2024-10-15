/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:35:18 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 12:37:39 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/**
 * ft_calloc - Alloue et initialise de la mémoire à zéro
 * @count: Nombre d'éléments à allouer
 * @size: Taille de chaque élément
 *
 * Cette fonction alloue de la mémoire pour un tableau de `count` éléments de
 * `size` octets chacun. La mémoire allouée est initialisée à zéro. Elle retourne
 * un pointeur vers la mémoire allouée ou NULL si l'allocation échoue.
 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
