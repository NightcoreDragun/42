#include "../libft.h"

/**
 * ft_strlcpy - Copie une chaîne source dans une destination de taille limitée
 * @dst: Pointeur vers la chaîne de destination
 * @src: Pointeur vers la chaîne source
 * @dstsize: Taille du buffer de destination
 *
 * Cette fonction copie jusqu'à `dstsize - 1` caractères de la chaîne `src`
 * dans la chaîne `dst`, en ajoutant toujours un caractère nul (`'\0'`) à la fin
 * de la chaîne destination. Si `dstsize` vaut 0, aucun caractère n'est copié
 * mais la longueur totale de la chaîne source est toujours calculée.
 *
 * Retourne la longueur totale de la chaîne source `src`, permettant de savoir
 * si la chaîne source a été tronquée dans la destination.
 */
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i = 0;

    // Vérifie si les pointeurs src ou dst sont nuls
    if (!dst || !src)
        return (0);

    // Si dstsize > 0, on copie jusqu'à dstsize - 1 pour laisser de la place pour '\0'
    if (dstsize > 0)
    {
        while (src[i] && i < dstsize - 1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0'; // Ajoute le caractère nul à la fin de la chaîne destination
    }

    // Calcule la longueur totale de la chaîne source, même si elle n'a pas été entièrement copiée
    while (src[i])
        i++;

    return (i); // Retourne la longueur totale de src
}
