#include "../libft.h"

/**
 * ft_strjoin - Concatène deux chaînes de caractères
 * @s1: La première chaîne (préfixe)
 * @s2: La deuxième chaîne (suffixe)
 *
 * Cette fonction alloue (avec malloc) et retourne une nouvelle chaîne
 * de caractères qui est le résultat de la concaténation de `s1` + `s2`.
 *
 * Retourne un pointeur vers la nouvelle chaîne ou NULL en cas d'échec de l'allocation.
 */
char *ft_strjoin(char const *s1, char const *s2)
{
    char *new_str;
    size_t s1_len;
    size_t s2_len;
    size_t total_len;

    // Si s1 ou s2 est NULL, retourne NULL
    if (!s1 || !s2)
        return (NULL);

    // Calculer les longueurs des chaînes s1 et s2
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    total_len = s1_len + s2_len;

    // Allouer de la mémoire pour la nouvelle chaîne
    new_str = (char *)malloc(sizeof(char) * (total_len + 1));
    if (!new_str)
        return (NULL);

    // Copier s1 dans la nouvelle chaîne et ajouter s2 directement après
    ft_strlcpy(new_str, s1, s1_len + 1);    // Copie s1 dans new_str
    ft_strlcat(new_str, s2, total_len + 1); // Concatène s2 après s1

    // Ajouter le caractère nul de fin
    new_str[total_len] = '\0';

    return (new_str);
}
