#include "../libft.h"

/**
 * ft_memcpy - Copie une zone mémoire d'une source vers une destination
 * @dst: Pointeur vers la zone de destination
 * @src: Pointeur vers la zone source
 * @n: Nombre d'octets à copier
 *
 * Cette fonction copie `n` octets de la zone mémoire pointée par `src`
 * vers celle pointée par `dst`. Si `dst` et `src` sont NULL, la fonction
 * renvoie NULL. La fonction ne gère pas les chevauchements de mémoire,
 * donc si les zones se chevauchent, il est recommandé d'utiliser `ft_memmove`.
 *
 * Retourne un pointeur vers `dst`.
 */
void *ft_memcpy(void *dst, const void *src, size_t n)
{
    // Cast des pointeurs génériques (void *) en unsigned char * pour manipuler
    // les octets individuellement.
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;

    if (!dst && !src)
        return (NULL);

    // Copie chaque octet de src vers dst
    while (n--)
        *d++ = *s++;

    return (dst);
}
