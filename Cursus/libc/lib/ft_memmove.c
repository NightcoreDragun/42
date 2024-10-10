#include "../libft.h"

/**
 * ft_memmove - Copie une zone mémoire en gérant les chevauchements
 * @dst: Pointeur vers la zone de destination
 * @src: Pointeur vers la zone source
 * @len: Nombre d'octets à copier
 *
 * Cette fonction copie `len` octets de la zone mémoire pointée par `src`
 * vers celle pointée par `dst`. Elle gère les cas où les zones mémoire
 * se chevauchent, en adaptant la direction de la copie pour éviter
 * d'écraser les données. Si `dst` et `src` sont NULL, la fonction renvoie NULL.
 *
 * Retourne un pointeur vers `dst`.
 */
void *ft_memmove(void *dst, const void *src, size_t len)
{
    // Cast des pointeurs génériques (void *) en unsigned char * pour manipuler
    // les octets individuellement.
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;

    // Vérifie si les deux pointeurs sont NULL
    if (!dst && !src)
        return (NULL);

    // Si la destination est avant la source, on copie normalement vers l'avant
    if (d < s)
    {
        while (len--)
            *d++ = *s++;
    }
    // Si la destination est après la source, on copie à rebours pour éviter l'écrasement
    else
    {
        d += len;
        s += len;
        while (len--)
            *(--d) = *(--s);
    }

    return (dst);
}
