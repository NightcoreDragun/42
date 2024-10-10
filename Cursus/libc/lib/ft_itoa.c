#include "../libft.h"

/**
 * ft_get_int_len - Calcule le nombre de chiffres d'un entier
 * @n: L'entier à analyser
 *
 * Cette fonction calcule le nombre de chiffres nécessaires pour représenter
 * l'entier en prenant en compte le signe pour les nombres négatifs.
 */
static size_t ft_get_int_len(int n)
{
    size_t len = 0;

    // Gérer le cas où n est 0
    if (n == 0)
        return (1);

    // Si n est négatif, ajouter un caractère pour le signe
    if (n < 0)
        len++;

    // Compter le nombre de chiffres
    while (n != 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

/**
 * ft_itoa - Convertit un entier en une chaîne de caractères
 * @n: L'entier à convertir
 *
 * Cette fonction alloue (avec malloc) et retourne une chaîne de caractères
 * représentant l'entier `n` reçu en argument. Les nombres négatifs sont
 * gérés correctement.
 *
 * Retourne une chaîne représentant l'entier ou NULL en cas d'échec de l'allocation.
 */
char *ft_itoa(int n)
{
    size_t len;
    char *str;
    unsigned int num;

    // Obtenir la longueur de l'entier (nombre de chiffres + signe si négatif)
    len = ft_get_int_len(n);

    // Allouer de la mémoire pour la chaîne, avec un caractère nul à la fin
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);

    // Terminer la chaîne par le caractère nul
    str[len] = '\0';

    // Gérer le cas où n est 0
    if (n == 0)
    {
        str[0] = '0';
        return (str);
    }

    // Si n est négatif, gérer le signe et utiliser num comme valeur absolue
    if (n < 0)
    {
        str[0] = '-';
        num = -n;
    }
    else
        num = n;

    // Remplir la chaîne en partant de la fin
    while (num != 0)
    {
        str[--len] = (num % 10) + '0';
        num /= 10;
    }

    return (str);
}
