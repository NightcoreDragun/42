#include "../libft.h"

/**
 * ft_isalpha - Vérifie si un caractère est une lettre de l'alphabet
 * @c: Le caractère à tester
 *
 * Cette fonction renvoie 1 si le caractère `c` est une lettre majuscule (A-Z)
 * ou minuscule (a-z), et 0 sinon.
 *
 * Retourne 1 si c'est une lettre, 0 sinon.
 */
int ft_isalpha(int c)
{
	// Vérifie si le caractère est une lettre majuscule ou minuscule
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
