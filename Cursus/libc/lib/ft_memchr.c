#include "../libft.h"

/**
 * ft_memchr - Cherche la première occurrence d'un caractère dans une zone mémoire
 * @s: La zone mémoire à examiner
 * @c: Le caractère à rechercher (en tant qu'unsigned char)
 * @n: Le nombre d'octets à examiner
 *
 * Cette fonction parcourt les `n` premiers octets de la zone mémoire pointée par `s`
 * à la recherche du caractère `c` (interprété comme un `unsigned char`).
 * Si le caractère `c` est trouvé dans la zone, un pointeur vers la première
 * occurrence de `c` est retourné. Si le caractère n'est pas trouvé dans les `n`
 * octets, la fonction renvoie NULL.
 *
 * Retourne un pointeur vers la première occurrence de `c` ou NULL s'il n'est pas trouvé.
 */
void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr = (const unsigned char *)s;
    size_t i = 0;

    // Parcourt les n premiers octets de la zone mémoire
    while (i < n)
    {
        if (ptr[i] == (unsigned char)c) // Si le caractère est trouvé
            return ((void *)(ptr + i)); // Retourne un pointeur vers l'octet trouvé
        i++;
    }

    // Si le caractère n'est pas trouvé, retourne NULL
    return (NULL);
}
