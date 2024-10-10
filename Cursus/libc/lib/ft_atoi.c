#include "../libft.h"

/**
 * ft_atoi - Convertit une chaîne de caractères en entier
 * @str: La chaîne de caractères à convertir
 *
 * Cette fonction convertit la chaîne de caractères `str` en un entier de type
 * `int`. Elle ignore les espaces blancs initiaux (comme ' ', '\t', '\n', etc.),
 * gère un signe facultatif ('+' ou '-') et convertit les chiffres suivants
 * en entier jusqu'à rencontrer un caractère non numérique.
 *
 * Retourne la valeur entière convertie de la chaîne ou 0 si la chaîne ne
 * contient pas de nombres valides.
 */
int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    // Ignore les espaces blancs initiaux
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
           str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;

    // Gère le signe s'il est présent
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    // Convertit les chiffres en entier
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    // Retourne le résultat final avec le signe correct
    return (result * sign);
}
