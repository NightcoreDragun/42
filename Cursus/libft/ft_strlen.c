/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:54:30 by apalalau          #+#    #+#             */
/*   Updated: 2024/10/11 13:55:27 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/**
 * ft_strlen - Calculates the length of a string
 * @s: Pointer to the string
 *
 * This function returns the length of the string `s`
 * (i.e., the number of characters until the null character `\0`),
 * without counting the `\0`. It iterates over each character
 * and increments the counter until it encounters `\0`.
 *
 * Returns the length of the string (excluding `\0`).
 */
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
