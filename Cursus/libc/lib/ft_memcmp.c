#include "../libft.h"

/**
 * ft_memcmp - Compare deux zones mémoire sur un nombre donné d'octets
 * @s1: La première zone mémoire
 * @s2: La seconde zone mémoire
 * @n: Le nombre d'octets à comparer
 *
 * Cette fonction compare les `n` premiers octets des zones mémoire `s1` et `s2`.
 * Elle renvoie un entier positif si `s1` est supérieur à `s2`, un entier négatif
 * si `s1` est inférieur à `s2`, et 0 si les deux zones sont égales.
 *
 * Retourne un entier indiquant la différence entre les deux zones mémoire :
 * - < 0 : `s1` est inférieure à `s2`
 * - 0 : `s1` est égale à `s2`
 * - > 0 : `s1` est supérieure à `s2`
 */
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1 = (const unsigned char *)s1;
    const unsigned char *p2 = (const unsigned char *)s2;
    size_t i = 0;

    // Compare chaque octet des deux zones mémoire jusqu'à n octets
    while (i < n)
    {
        if (p1[i] != p2[i])         // Si une différence est trouvée
            return (p1[i] - p2[i]); // Retourne la différence des octets
        i++;
    }

    // Si aucune différence n'est trouvée, retourne 0
    return (0);
}
