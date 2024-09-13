/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:06:17 by apalalau          #+#    #+#             */
/*   Updated: 2024/09/12 12:07:51 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int *tab;

    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    tab = (int *)malloc(sizeof(int) * (max - min));
    if (tab == NULL)
        return (-1);
    i = 0;
    while (min < max)
    {
        tab[i] = min;
        min++;
        i++;
    }
    *range = tab;
    return (i);
}
