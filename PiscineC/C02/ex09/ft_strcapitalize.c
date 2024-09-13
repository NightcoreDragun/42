/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalalau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:08:43 by apalalau          #+#    #+#             */
/*   Updated: 2024/08/22 11:08:46 by apalalau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && new_word)
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z' && !new_word)
			str[i] += 32;

		
		if ((str[i] < '0' || str[i] > '9')
			&& (str[i] < 'A' || str[i] > 'Z')
			&& (str[i] < 'a' || str[i] > 'z'))
			new_word = 1;
		else
			new_word = 0;
		i++;
	}
	return (str);
}


