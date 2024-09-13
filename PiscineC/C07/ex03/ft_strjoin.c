/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:28:33 by apalalau          #+#    #+#             */
/*   Updated: 2024/09/13 07:04:07 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep)
{
    int		i;
    int		j;
    int		k;
    int		len;
    char	*str;

    i = 0;
    len = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j])
            j++;
        len += j;
        i++;
    }
    len += (size - 1) * sep[0];
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (0);
    i = 0;
    k = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j])
            str[k++] = strs[i][j++];
        j = 0;
        while (sep[j] && i < size - 1)
            str[k++] = sep[j++];
        i++;
    }
    str[k] = '\0';
    return (str);
}