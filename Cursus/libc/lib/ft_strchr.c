#include "../libft.h"

/**
 * ft_strchr - Cherche la première occurrence d'un caractère dans une chaîne
 * @s: La chaîne de caractères à examiner
 * @c: Le caractère à rechercher
 *
 * Cette fonction parcourt la chaîne `s` pour trouver la première occurrence
 * du caractère `c`. Le caractère de fin de chaîne `\0` est également considéré.
 * Si le caractère `c` est trouvé, un pointeur vers cette position dans `s` est
 * retourné. Si le caractère `c` n'est pas trouvé, la fonction renvoie NULL.
 *
 * Retourne un pointeur vers la première occurrence de `c` ou NULL s'il n'est pas trouvé.
 */
char *ft_strchr(const char *s, int c)
{
    // Parcourt la chaîne jusqu'à trouver le caractère ou atteindre le '\0'
    while (*s)
    {
        if (*s == (char)c)      // Si le caractère correspond à c
            return ((char *)s); // Retourne un pointeur vers la position du caractère
        s++;
    }

    // Si c est '\0', on retourne un pointeur vers la fin de la chaîne
    if (c == '\0')
        return ((char *)s);

    // Si le caractère n'est pas trouvé, retourne NULL
    return (NULL);
}
