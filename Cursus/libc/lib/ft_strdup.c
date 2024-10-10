#include "../libft.h"

/**
 * ft_strdup - Duplique une chaîne de caractères
 * @s1: La chaîne de caractères à dupliquer
 *
 * Cette fonction alloue de la mémoire et crée une copie de la chaîne `s1`.
 * Elle alloue exactement la mémoire nécessaire pour contenir la copie
 * (y compris le caractère nul `\0`). Si l'allocation échoue, la fonction
 * retourne NULL.
 *
 * Retourne un pointeur vers la chaîne dupliquée ou NULL en cas d'échec.
 */
char *ft_strdup(const char *s1)
{
    char *dup;
    size_t len;

    // Calcul de la longueur de la chaîne s1
    len = ft_strlen(s1) + 1;

    // Allocation de mémoire pour la nouvelle chaîne
    dup = (char *)malloc(len);
    if (!dup)
        return (NULL);

    // Copie de la chaîne s1 dans dup
    ft_memcpy(dup, s1, len);

    return (dup);
}
