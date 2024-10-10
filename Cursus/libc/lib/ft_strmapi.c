#include "../libft.h"

/**
 * ft_strmapi - Applique une fonction à chaque caractère d'une chaîne
 * @s: La chaîne de caractères sur laquelle itérer
 * @f: La fonction à appliquer à chaque caractère
 *
 * Cette fonction alloue (avec malloc) et retourne une nouvelle chaîne de
 * caractères, qui est le résultat de l'application de la fonction `f` à chaque
 * caractère de la chaîne `s`. La fonction `f` prend en argument l'index du
 * caractère et le caractère lui-même.
 *
 * Retourne la nouvelle chaîne, ou NULL si l'allocation échoue.
 */
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *new_str;
    size_t i;

    // Vérifier si la chaîne d'entrée ou la fonction est NULL
    if (!s || !f)
        return (NULL);

    // Allouer la mémoire pour la nouvelle chaîne, en tenant compte du caractère nul final
    new_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!new_str)
        return (NULL);

    // Appliquer la fonction f à chaque caractère de la chaîne s
    i = 0;
    while (s[i])
    {
        new_str[i] = f(i, s[i]); // Appel de la fonction f avec l'index et le caractère actuel
        i++;
    }

    // Ajouter le caractère nul à la fin de la nouvelle chaîne
    new_str[i] = '\0';

    return (new_str);
}
