/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:07:04 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 13:08:07 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/**
 * ft_putstr_fd - Écrit une chaîne de caractères sur le descripteur de fichier.
 * @s: La chaîne de caractères à écrire.
 * @fd: Le descripteur de fichier sur lequel écrire.
 *
 * Cette fonction utilise la fonction write pour écrire la chaîne de caractères 
 * `s` sur le descripteur de fichier spécifié par `fd`.
 */
void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	if (!s)
		return ;
	len = 0;
	while (s[len])
		len++;
	write(fd, s, len);
}
