/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:02:17 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 13:04:35 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * ft_putendl_fd - Écrit une chaîne de caractères
 * suivie d'un retour à la ligne
 * sur le descripteur de fichier donné
 * @s: La chaîne de caractères à écrire
 * @fd: Le descripteur de fichier sur lequel écrire
 *
 * Cette fonction utilise la fonction write 
 * pour écrire la chaîne de caractères `s`
 * sur le descripteur de fichier spécifié par `fd`, 
 * suivie d'un caractère de retour
 * à la ligne ('\n').
 */
void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;

	if (!s)
		return ;
	len = 0;
	while (s[len])
		len++;
	write(fd, s, len);
	write(fd, "\n", 1);
}
