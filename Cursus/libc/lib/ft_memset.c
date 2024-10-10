#include "../libft.h"

/**
 * ft_memset - Remplit une zone mémoire avec une valeur donnée
 * @b: Pointeur vers la zone mémoire à remplir
 * @c: La valeur à copier (convertie en unsigned char)
 * @len: Nombre d'octets à remplir avec la valeur
 *
 * Cette fonction remplit les `len` premiers octets de la zone mémoire
 * pointée par `b` avec la valeur `c`, qui est convertie en unsigned char.
 * Elle retourne un pointeur vers la zone mémoire initiale `b`.
 *
 * Retourne un pointeur vers `b`.
 */
void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr;
	unsigned int i;

	ptr = (unsigned char *)b; // Cast du pointeur b en unsigned char *
	i = 0;

	// Boucle pour remplir len octets avec la valeur de c
	while (i < len)
	{
		ptr[i] = (unsigned char)c; // Remplit chaque octet avec c
		i++;
	}

	return (b); // Retourne le pointeur initial b
}
