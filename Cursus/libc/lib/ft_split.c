#include "../libft.h"

/**
 * ft_count_words - Compte le nombre de mots dans la chaîne, séparés par le délimiteur
 * @s: La chaîne de caractères à analyser
 * @c: Le caractère délimiteur
 *
 * Cette fonction aide à déterminer le nombre de "mots" (sous-chaînes) dans
 * la chaîne d'entrée, en fonction du délimiteur.
 */
static size_t ft_count_words(char const *s, char c)
{
    size_t count = 0;
    int in_word = 0;

    while (*s)
    {
        if (*s != c && in_word == 0)
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)
        {
            in_word = 0;
        }
        s++;
    }
    return (count);
}

/**
 * ft_word_len - Calcule la longueur d'un mot
 * @s: La chaîne de caractères à analyser
 * @c: Le caractère délimiteur
 *
 * Cette fonction calcule la longueur d'un mot jusqu'au prochain délimiteur.
 */
static size_t ft_word_len(char const *s, char c)
{
    size_t len = 0;

    while (s[len] && s[len] != c)
    {
        len++;
    }
    return (len);
}

/**
 * ft_split - Découpe une chaîne en un tableau de chaînes selon un délimiteur
 * @s: La chaîne de caractères à découper
 * @c: Le caractère délimiteur
 *
 * Cette fonction alloue (avec malloc) et retourne un tableau de chaînes de
 * caractères obtenu en séparant la chaîne `s` selon le caractère `c`.
 * Le tableau est terminé par un pointeur NULL.
 *
 * Retourne le tableau de chaînes, ou NULL si une allocation échoue.
 */
char **ft_split(char const *s, char c)
{
    char **result;
    size_t i = 0;
    size_t word_count;
    size_t word_len;

    // Vérifier si la chaîne d'entrée est NULL
    if (!s)
        return (NULL);

    // Compter le nombre de mots
    word_count = ft_count_words(s, c);

    // Allouer de la mémoire pour le tableau de chaînes, plus un emplacement pour le NULL final
    result = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (!result)
        return (NULL);

    // Parcourir la chaîne et découper les mots
    while (*s)
    {
        if (*s != c)
        {
            // Calculer la longueur du mot
            word_len = ft_word_len(s, c);
            // Allouer de la mémoire pour le mot et le copier dans le tableau
            result[i] = (char *)malloc(sizeof(char) * (word_len + 1));
            if (!result[i])
            {
                // En cas d'échec, libérer la mémoire déjà allouée
                while (i > 0)
                    free(result[--i]);
                free(result);
                return (NULL);
            }
            ft_strlcpy(result[i], s, word_len + 1);
            i++;
            s += word_len;
        }
        else
        {
            s++;
        }
    }
    // Ajouter le pointeur NULL final
    result[i] = NULL;
    return (result);
}
