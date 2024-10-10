#include "../libft.h"

/**
 * ft_isprint - Vérifie si un caractère est imprimable
 * @c: Le caractère à tester
 *
 * Cette fonction renvoie 1 si le caractère `c` est un caractère imprimable,
 * c'est-à-dire compris entre 32 (espace) et 126 (tous les autres caractères
 * imprimables) dans la table ASCII. Les caractères de contrôle (en dessous de 32)
 * ne sont pas considérés comme imprimables.
 *
 * Retourne 1 si c'est un caractère imprimable, 0 sinon.
 */
int ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
