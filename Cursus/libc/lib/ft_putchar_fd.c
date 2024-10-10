#include "../libft.h"

/**
 * ft_putchar_fd - Écrit un caractère sur le descripteur de fichier donné
 * @c: Le caractère à écrire
 * @fd: Le descripteur de fichier sur lequel écrire
 *
 * Cette fonction utilise la fonction write pour écrire le caractère `c`
 * sur le descripteur de fichier spécifié par `fd`.
 *
 * Retourne : Aucune, la fonction est de type void.
 */
void ft_putchar_fd(char c, int fd)
{
    // Utiliser la fonction write pour écrire le caractère sur le descripteur fd
    write(fd, &c, 1);
}
