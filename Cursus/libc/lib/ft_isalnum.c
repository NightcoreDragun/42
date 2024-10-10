#include "../libft.h"

/**
 * ft_isalnum - Vérifie si un caractère est alphanumérique
 * @c: Le caractère à tester
 *
 * Cette fonction renvoie 1 si le caractère `c` est une lettre (majuscule ou minuscule)
 * ou un chiffre (0-9), et 0 sinon. Elle utilise les fonctions `ft_isalpha` pour vérifier
 * si le caractère est une lettre et `ft_isdigit` pour vérifier si c'est un chiffre.
 *
 * Retourne 1 si le caractère est alphanumérique, 0 sinon.
 */
int ft_isalnum(int c)
{
	// Utilisation de ft_isalpha pour vérifier si `c` est une lettre
	// Utilisation de ft_isdigit pour vérifier si `c` est un chiffre
	// Si c'est une lettre ou un chiffre, la fonction renvoie 1, sinon 0
	return ((ft_isalpha(c) || ft_isdigit(c)) ? 1 : 0);
}
