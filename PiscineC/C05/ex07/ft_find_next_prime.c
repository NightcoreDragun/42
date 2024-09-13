/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:49:49 by apalalau          #+#    #+#             */
/*   Updated: 2024/09/04 15:52:12 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	is_prime;

	if (nb < 2)
		return (2);
	while (1)
	{
		i = 2;
		is_prime = 1;
		while (i <= nb / 2)
		{
			if (nb % i == 0)
			{
				is_prime = 0;
				break ;
			}
			i++;
		}
		if (is_prime)
			return (nb);
		nb++;
	}
}
