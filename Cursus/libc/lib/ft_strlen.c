#include "../libft.h"

/**
 * ft_strlen - Calcule la longueur d'une chaîne de caractères
 * @s: Pointeur vers la chaîne de caractères
 *
 * Cette fonction renvoie la longueur de la chaîne `s` (c'est-à-dire le nombre
 * de caractères qui la composent jusqu'au caractère nul `\0`), sans compter
 * ce dernier. Elle parcourt chaque caractère de la chaîne et incrémente le compteur
 * jusqu'à rencontrer `\0`.
 *
 * Retourne la longueur de la chaîne (sans le `\0`).
 */
size_t ft_strlen(const char *s)
{
    size_t len = 0;

    // Parcourt chaque caractère de la chaîne jusqu'à rencontrer '\0'
    while (s[len] != '\0')
        len++;
    return (len);
}
