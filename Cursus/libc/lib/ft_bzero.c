#include "../libft.h"

/**
 * ft_bzero - Remplit une zone mémoire avec des zéros
 * @s: Pointeur vers la zone mémoire à remplir
 * @n: Nombre d'octets à remplir avec des zéros
 *
 * Cette fonction prend un pointeur vers une zone mémoire `s` et met les `n`
 * premiers octets de cette zone à zéro. Elle utilise la fonction `ft_memset`
 * pour remplir la mémoire avec la valeur 0. C'est une fonction couramment
 * utilisée pour initialiser ou réinitialiser des blocs de mémoire avant leur
 * utilisation.
 */
void ft_bzero(void *s, size_t n)
{
    // Utilisation de ft_memset pour remplir la zone mémoire pointée par `s` avec des zéros (0)
    // 'n' représente le nombre d'octets que nous voulons mettre à zéro.
    ft_memset(s, 0, n);
}
