/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:35:18 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 12:35:59 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * ft_bzero - Remplit une zone mémoire avec des zéros
 * @s: Pointeur vers la zone mémoire à remplir
 * @n: Nombre d'octets à remplir avec des zéros
 *
 * Cette fonction prend un pointeur vers une zone mémoire `s` et met les `n`
 * premiers octets de cette zone à zéro. Elle utilise la fonction `ft_memset`
 * pour remplir la mémoire avec la valeur 0.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
