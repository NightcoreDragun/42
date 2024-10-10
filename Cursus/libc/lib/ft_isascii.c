#include "../libft.h"

/**
 * ft_isascii - Vérifie si un caractère fait partie de la table ASCII
 * @c: Le caractère à tester
 *
 * Cette fonction renvoie 1 si le caractère `c` est compris entre 0 et 127,
 * ce qui correspond aux valeurs de la table ASCII standard.
 *
 * Retourne 1 si c'est un caractère ASCII, 0 sinon.
 */
int ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
