#include "../libft.h"

/**
 * ft_toupper - Convertit une lettre minuscule en majuscule
 * @c: Le caractère à convertir
 *
 * Cette fonction prend un caractère en entrée. Si ce caractère est une
 * lettre minuscule (comprise entre 'a' et 'z'), elle le convertit en lettre
 * majuscule (comprise entre 'A' et 'Z'). Si le caractère n'est pas une lettre
 * minuscule, il est retourné tel quel.
 *
 * Retourne le caractère converti en majuscule, ou le caractère inchangé
 * s'il n'est pas une minuscule.
 */
int ft_toupper(int c)
{
    // Si le caractère est une lettre minuscule, on le convertit en majuscule
    if (c >= 'a' && c <= 'z')
        return (c - 32); // 'a' - 'A' = 32 dans la table ASCII
    return (c);          // Si ce n'est pas une minuscule, retourne le caractère original
}
