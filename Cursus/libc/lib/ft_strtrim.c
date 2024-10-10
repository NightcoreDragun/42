#include "../libft.h"

/**
 * ft_strtrim - Supprime les caractères spécifiés au début et à la fin d'une chaîne
 * @s1: La chaîne à trimmer
 * @set: Le set de caractères à supprimer
 *
 * Cette fonction alloue (avec malloc) et retourne une copie de la chaîne `s1`,
 * sans les caractères spécifiés dans `set` au début et à la fin. Les caractères
 * de `set` sont considérés comme à ignorer s'ils apparaissent en séquence au
 * début ou à la fin de la chaîne `s1`.
 *
 * Retourne une copie trimmée de `s1` ou NULL en cas d'échec de l'allocation.
 */
char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    char *trimmed_str;

    // Si s1 ou set est NULL, retourne NULL
    if (!s1 || !set)
        return (NULL);

    // Trouver l'index de départ en ignorant les caractères du set au début
    start = 0;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;

    // Trouver l'index de fin en ignorant les caractères du set à la fin
    end = ft_strlen(s1);
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;

    // Allouer la mémoire pour la chaîne trimmée
    trimmed_str = (char *)malloc(sizeof(char) * (end - start + 1));
    if (!trimmed_str)
        return (NULL);

    // Copier la partie trimmée de s1 dans la nouvelle chaîne
    ft_strlcpy(trimmed_str, s1 + start, end - start + 1);

    return (trimmed_str);
}
