#include "../libft.h"

/**
 * ft_calloc - Alloue et initialise de la mémoire à zéro
 * @count: Nombre d'éléments à allouer
 * @size: Taille de chaque élément
 *
 * Cette fonction alloue de la mémoire pour un tableau de `count` éléments de
 * `size` octets chacun. La mémoire allouée est initialisée à zéro. Elle retourne
 * un pointeur vers la mémoire allouée ou NULL si l'allocation échoue.
 *
 * Retourne un pointeur vers la mémoire allouée ou NULL si échec.
 */
void *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    // Multiplie count et size pour allouer la mémoire nécessaire
    ptr = malloc(count * size);
    if (!ptr)
        return (NULL);

    // Initialise la mémoire à zéro
    ft_bzero(ptr, count * size);

    return (ptr);
}
