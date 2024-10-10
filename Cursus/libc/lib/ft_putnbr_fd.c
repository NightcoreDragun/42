#include "../libft.h"

/**
 * ft_putnbr_fd - Écrit un entier sur le descripteur de fichier donné
 * @n: L'entier à écrire
 * @fd: Le descripteur de fichier sur lequel écrire
 *
 * Cette fonction écrit l'entier `n` sur le descripteur de fichier spécifié par `fd`.
 * Elle gère les entiers négatifs, le cas spécial de la plus petite valeur négative
 * et utilise la fonction write pour afficher chaque chiffre.
 *
 * Retourne : Aucune, la fonction est de type void.
 */
void ft_putnbr_fd(int n, int fd)
{
    char c;

    // Gérer le cas spécial de la plus petite valeur négative
    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return;
    }

    // Si l'entier est négatif, écrire le signe '-' et prendre la valeur absolue
    if (n < 0)
    {
        write(fd, "-", 1);
        n = -n;
    }

    // Si l'entier est supérieur ou égal à 10, écrire les chiffres de façon récursive
    if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
    }

    // Écrire le chiffre des unités
    c = (n % 10) + '0';
    write(fd, &c, 1);
}
