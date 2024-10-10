#include "../libft.h"

/**
 * ft_putendl_fd - Écrit une chaîne de caractères suivie d'un retour à la ligne
 *                 sur le descripteur de fichier donné
 * @s: La chaîne de caractères à écrire
 * @fd: Le descripteur de fichier sur lequel écrire
 *
 * Cette fonction utilise la fonction write pour écrire la chaîne de caractères `s`
 * sur le descripteur de fichier spécifié par `fd`, suivie d'un caractère de retour
 * à la ligne ('\n').
 *
 * Retourne : Aucune, la fonction est de type void.
 */
void ft_putendl_fd(char *s, int fd)
{
    size_t len;

    // Vérifier si la chaîne est NULL
    if (!s)
        return;

    // Calculer la longueur de la chaîne
    len = 0;
    while (s[len])
        len++;

    // Utiliser la fonction write pour écrire la chaîne sur le descripteur fd
    write(fd, s, len);

    // Écrire le caractère de retour à la ligne '\n'
    write(fd, "\n", 1);
}
