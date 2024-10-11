/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:00:46 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 13:02:09 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * ft_putchar_fd - Écrit un caractère sur le descripteur de fichier donné
 * @c: Le caractère à écrire
 * @fd: Le descripteur de fichier sur lequel écrire
 *
 * Cette fonction utilise la fonction write pour écrire le caractère `c`
 * sur le descripteur de fichier spécifié par `fd`.
 *
 * Retourne : Aucune, la fonction est de type void.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
