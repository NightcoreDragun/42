#include "../libft.h"

/**
 * ft_isdigit - Vérifie si un caractère est un chiffre
 * @c: Le caractère à tester
 *
 * Cette fonction renvoie 1 si le caractère `c` est un chiffre décimal (0-9),
 * et 0 sinon.
 *
 * Retourne 1 si c'est un chiffre, 0 sinon.
 */
int ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
