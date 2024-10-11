/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:04:42 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 13:06:47 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * ft_putnbr_fd - Écrit un entier sur le descripteur de fichier donné.
 * @n: L'entier à écrire.
 * @fd: Le descripteur de fichier sur lequel écrire.
 *
 * Cette fonction écrit l'entier `n` sur le descripteur de fichier spécifié 
 * par `fd`. Elle gère les entiers négatifs, le cas spécial de la plus petite 
 * valeur négative et utilise la fonction write pour afficher chaque chiffre.
 */
void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}
