/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:59:03 by apalalau          #+#    #+#             */
/*   Updated: 2024/09/12 12:00:46 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strdup(char *src)
{
    char	*dest;
    int		i;

    i = 0;
    while (src[i])
        i++;
    dest = (char *)malloc(sizeof(char) * (i + 1));
    if (dest == 0)
        return (0);
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);

}