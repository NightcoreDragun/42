#include "../libft.h"

/**
 * ft_tolower - Convertit une lettre majuscule en minuscule
 * @c: Le caractère à convertir
 *
 * Cette fonction prend un caractère en entrée. Si ce caractère est une
 * lettre majuscule (comprise entre 'A' et 'Z'), elle le convertit en lettre
 * minuscule (comprise entre 'a' et 'z'). Si le caractère n'est pas une lettre
 * majuscule, il est retourné tel quel.
 *
 * Retourne le caractère converti en minuscule, ou le caractère inchangé
 * s'il n'est pas une majuscule.
 */
int ft_tolower(int c)
{
    // Si le caractère est une lettre majuscule, on le convertit en minuscule
    if (c >= 'A' && c <= 'Z')
        return (c + 32); // 'A' + 32 = 'a' dans la table ASCII
    return (c);          // Si ce n'est pas une majuscule, retourne le caractère original
}
