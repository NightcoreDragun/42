#include "../libft.h"

/**
 * ft_strrchr - Cherche la dernière occurrence d'un caractère dans une chaîne
 * @s: La chaîne de caractères à examiner
 * @c: Le caractère à rechercher
 *
 * Cette fonction parcourt la chaîne `s` à la recherche de la dernière occurrence
 * du caractère `c`. Le caractère de fin de chaîne `\0` est également considéré.
 * Si le caractère `c` est trouvé, un pointeur vers cette dernière occurrence
 * dans `s` est retourné. Si le caractère `c` n'est pas trouvé, la fonction renvoie NULL.
 *
 * Retourne un pointeur vers la dernière occurrence de `c` ou NULL s'il n'est pas trouvé.
 */
char *ft_strrchr(const char *s, int c)
{
    const char *last_occurrence = NULL;

    // Parcourt toute la chaîne à la recherche de `c`
    while (*s)
    {
        if (*s == (char)c)
            last_occurrence = s; // Garde un pointeur vers la dernière occurrence trouvée
        s++;
    }

    // Si c est '\0', on retourne un pointeur vers la fin de la chaîne
    if (c == '\0')
        return ((char *)s);

    // Retourne le pointeur vers la dernière occurrence trouvée ou NULL
    return ((char *)last_occurrence);
}
