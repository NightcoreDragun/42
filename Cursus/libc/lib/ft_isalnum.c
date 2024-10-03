/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nightcoredragun <nightcoredragun@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:04:13 by nightcoredr       #+#    #+#             */
/*   Updated: 2024/10/02 12:51:54 by nightcoredr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	ft_isalnum(int c)
{
	return ( (ft_isalpha(c) || ft_isdigit(c)) ? 1 : 0);
}
