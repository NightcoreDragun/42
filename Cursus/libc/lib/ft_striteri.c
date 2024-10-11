/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:47:29 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 13:49:50 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * ft_striteri - Applique une fonction à chaque caractère d'une chaîne
 * @s: La chaîne de caractères sur laquelle itérer
 * @f: La fonction à appliquer à chaque caractère
 *
 * Cette fonction applique la fonction `f` à chaque caractère de la chaîne `s`.
 * La fonction `f` prend en argument l'index du caractère et un pointeur vers
 * ce caractère, ce qui permet de le modifier directement dans la chaîne.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
