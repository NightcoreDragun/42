/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nightcoredragun <nightcoredragun@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:06:08 by nightcoredr       #+#    #+#             */
/*   Updated: 2024/10/02 13:06:09 by nightcoredr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlen(const char *s)
{
    size_t len = 0;
    
    while (s[len] != '\0')
        len++;
    return (len);
}
