#include "../libft.h"

/**
 * ft_substr - Extrait une sous-chaîne de la chaîne 's'
 * @s: La chaîne d'origine
 * @start: L'index de départ pour la sous-chaîne
 * @len: La taille maximale de la sous-chaîne
 *
 * Cette fonction alloue (avec malloc) et retourne une nouvelle chaîne de
 * caractères, qui est une sous-chaîne de la chaîne `s`. La sous-chaîne
 * commence à l'index `start` et a une longueur maximale de `len`.
 *
 * Retourne un pointeur vers la sous-chaîne ou NULL en cas d'échec de l'allocation.
 */
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;
    size_t s_len;

    // Si s est NULL, retourne NULL
    if (!s)
        return (NULL);

    // Obtenir la longueur de la chaîne s
    s_len = ft_strlen(s);

    // Si start est supérieur ou égal à la longueur de s, retourne NULL
    if (start >= s_len)
        return (NULL);

    // Ajuster len pour qu'il ne dépasse pas la longueur de la chaîne s
    if (len > s_len - start)
        len = s_len - start;

    // Allouer la mémoire pour la sous-chaîne
    substr = (char *)malloc(sizeof(char) * (len + 1));
    if (!substr)
        return (NULL);

    // Copier la sous-chaîne de s à partir de l'index start
    i = 0;
    while (i < len && s[start + i])
    {
        substr[i] = s[start + i];
        i++;
    }

    // Ajouter le caractère nul de fin de chaîne
    substr[i] = '\0';

    return (substr);
}
