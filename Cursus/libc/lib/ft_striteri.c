#include "../libft.h"

/**
 * ft_striteri - Applique une fonction à chaque caractère d'une chaîne
 * @s: La chaîne de caractères sur laquelle itérer
 * @f: La fonction à appliquer à chaque caractère
 *
 * Cette fonction applique la fonction `f` à chaque caractère de la chaîne `s`.
 * La fonction `f` prend en argument l'index du caractère et un pointeur vers
 * ce caractère, ce qui permet de le modifier directement dans la chaîne.
 *
 * Retourne : Aucune, la fonction est de type void.
 */
void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i;

    // Vérifier si la chaîne d'entrée ou la fonction est NULL
    if (!s || !f)
        return;

    // Parcourir la chaîne et appliquer la fonction f à chaque caractère
    i = 0;
    while (s[i])
    {
        f(i, &s[i]); // Appel de la fonction f avec l'index et l'adresse du caractère actuel
        i++;
    }
}
