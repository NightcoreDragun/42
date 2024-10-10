#include <stdio.h>
#include <assert.h>
#include "libft.h"
#include <string.h> // Inclusion de <string.h> pour utiliser strcmp

// Test des fonctions de vérification de caractères
void test_char_functions()
{
    // ft_isalpha
    assert(ft_isalpha('a') == 1);
    assert(ft_isalpha('Z') == 1);
    assert(ft_isalpha('1') == 0);

    // ft_isdigit
    assert(ft_isdigit('0') == 1);
    assert(ft_isdigit('9') == 1);
    assert(ft_isdigit('a') == 0);

    // ft_isalnum
    assert(ft_isalnum('a') == 1);
    assert(ft_isalnum('5') == 1);
    assert(ft_isalnum('@') == 0);

    // ft_isascii
    assert(ft_isascii(65) == 1);
    assert(ft_isascii(128) == 0);

    // ft_isprint
    assert(ft_isprint(' ') == 1);
    assert(ft_isprint('~') == 1);
    assert(ft_isprint(127) == 0);
}

// Test des fonctions de conversion de caractères
void test_case_conversion()
{
    // ft_toupper
    assert(ft_toupper('a') == 'A');
    assert(ft_toupper('A') == 'A');
    assert(ft_toupper('1') == '1');

    // ft_tolower
    assert(ft_tolower('A') == 'a');
    assert(ft_tolower('a') == 'a');
    assert(ft_tolower('1') == '1');
}

void test_string_functions()
{
    // ft_strlen
    assert(ft_strlen("Bonjour") == 7);
    assert(ft_strlen("") == 0);
    assert(ft_strlen("42") == 2);

    // ft_strlcpy
    char dest1[10];
    assert(ft_strlcpy(dest1, "Bonjour", 10) == 7);
    assert(ft_strlcpy(dest1, "Bonjour", 3) == 7);
    assert(ft_strlcpy(dest1, "Bonjour, tout le monde!", 5) == 23);

    // ft_strlcat
    char dest2[20] = "Bonjour";
    assert(ft_strlcat(dest2, " tout le monde", 20) == 18);
    assert(strcmp(dest2, "Bonjour tout le monde") == 0);

    // Cas supplémentaires pour ft_strlcat
    // Cas 1 : Concatenation normale
    char dest3[20] = "Bonjour";
    assert(ft_strlcat(dest3, " à tous", 20) == 14);
    assert(strcmp(dest3, "Bonjour à tous") == 0);

    // Cas 2 : src est vide
    char dest4[20] = "Bonjour";
    assert(ft_strlcat(dest4, "", 20) == 7);
    assert(strcmp(dest4, "Bonjour") == 0);

    // Cas 3 : dst est vide
    char dest5[20] = "";
    assert(ft_strlcat(dest5, "Bonjour", 20) == 7);
    assert(strcmp(dest5, "Bonjour") == 0);

    // Cas 4 : dstsize est plus petit que la longueur de dst
    char dest6[20] = "Bonjour";
    assert(ft_strlcat(dest6, " tout le monde", 3) == 18);
    assert(strcmp(dest6, "Bonjour") == 0); // Pas de concatenation

    // Cas 5 : dstsize est 0
    char dest7[20] = "Bonjour";
    assert(ft_strlcat(dest7, " tout le monde", 0) == 18);
    assert(strcmp(dest7, "Bonjour") == 0); // Pas de concatenation

    // Cas 6 : dstsize est égal à la longueur de dst
    char dest8[20] = "Bonjour";
    assert(ft_strlcat(dest8, " tout le monde", 7) == 18);
    assert(strcmp(dest8, "Bonjour") == 0); // Pas de concatenation

    // Cas 7 : Concatenation avec suffisamment d'espace
    char dest9[20] = "Bonjour";
    assert(ft_strlcat(dest9, " à vous", 20) == 13);
    assert(strcmp(dest9, "Bonjour à vous") == 0);

    // ft_strchr
    assert(ft_strchr("Bonjour à tous!", 'o') == &"Bonjour à tous!"[1]);
    assert(ft_strchr("Bonjour", 'z') == NULL);

    // ft_strrchr
    assert(ft_strrchr("Bonjour à tous!", 'o') == &"Bonjour à tous!"[10]);
    assert(ft_strrchr("Bonjour", 'z') == NULL);

    // ft_strncmp
    assert(ft_strncmp("Bonjour", "Bonjour", 7) == 0);
    assert(ft_strncmp("Bonjour", "Bonjouz", 7) < 0);
    assert(ft_strncmp("Bonjour", "Bonjo", 5) == 0);

    // ft_strnstr
    assert(ft_strnstr("Bonjour à tous!", "tous", 15) == &"Bonjour à tous!"[9]);
    assert(ft_strnstr("Bonjour", "monde", 7) == NULL);

    // ft_strdup
    char *dup = ft_strdup("Bonjour");
    assert(ft_strncmp(dup, "Bonjour", 7) == 0);
    free(dup);
}

// Test des fonctions de gestion de la mémoire
void test_memory_functions()
{
    // ft_memset
    char buffer1[10] = "Hello";
    ft_memset(buffer1, 'A', 3);
    assert(buffer1[0] == 'A' && buffer1[1] == 'A' && buffer1[2] == 'A');

    // ft_bzero
    char buffer2[10] = "Hello";
    ft_bzero(buffer2, 3);
    assert(buffer2[0] == 0 && buffer2[1] == 0 && buffer2[2] == 0);

    // ft_memcpy
    char src[10] = "Hello";
    char dest[10];
    ft_memcpy(dest, src, 6);
    assert(ft_strncmp(dest, "Hello", 5) == 0);

    // ft_memmove
    char overlap[10] = "Hello";
    ft_memmove(overlap + 2, overlap, 5);
    assert(ft_strncmp(overlap, "HeHello", 7) == 0);

    // ft_memchr
    assert(ft_memchr("Hello, world!", 'w', 13) == &"Hello, world!"[7]);
    assert(ft_memchr("Hello, world!", 'z', 13) == NULL);

    // ft_memcmp
    assert(ft_memcmp("Hello", "Hello", 5) == 0);
    assert(ft_memcmp("Hello", "Hellp", 5) < 0);
    assert(ft_memcmp("Hellp", "Hello", 5) > 0);
}

// Test des fonctions de conversion de chaînes
void test_conversion_functions()
{
    // ft_atoi
    assert(ft_atoi("123") == 123);
    assert(ft_atoi("-123") == -123);
    assert(ft_atoi("0") == 0);
    assert(ft_atoi("  +42") == 42);

    // ft_itoa
    char *num_str = ft_itoa(-12345);
    assert(ft_strncmp(num_str, "-12345", 6) == 0);
    free(num_str);
}

// Test des fonctions d'allocation de mémoire
void test_allocation_functions()
{
    // ft_calloc
    int *arr = (int *)ft_calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        assert(arr[i] == 0);
    }
    free(arr);
}

// Test des fonctions supplémentaires
void test_additional_functions()
{
    // ft_substr
    char *substr = ft_substr("Hello, world!", 7, 5);
    assert(ft_strncmp(substr, "world", 5) == 0);
    free(substr);

    // ft_strjoin
    char *joined = ft_strjoin("Hello", " world");
    assert(ft_strncmp(joined, "Hello world", 11) == 0);
    free(joined);

    // ft_strtrim
    char *trimmed = ft_strtrim("   Hello   ", " ");
    assert(ft_strncmp(trimmed, "Hello", 5) == 0);
    free(trimmed);

    // ft_split
    char **split = ft_split("Hello world example", ' ');
    assert(ft_strncmp(split[0], "Hello", 5) == 0);
    assert(ft_strncmp(split[1], "world", 5) == 0);
    assert(ft_strncmp(split[2], "example", 7) == 0);
    free(split[0]);
    free(split[1]);
    free(split[2]);
    free(split);
}

// Test des fonctions d'écriture sur un descripteur de fichier
void test_fd_functions()
{
    // Pour ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, et ft_putnbr_fd,
    // il serait nécessaire de rediriger la sortie ou de tester avec des fichiers.
}

// Fonction main pour exécuter les tests
int main()
{
    test_char_functions();
    test_case_conversion();
    test_string_functions();
    test_memory_functions();
    test_conversion_functions();
    test_allocation_functions();
    test_additional_functions();
    test_fd_functions();

    printf("All tests passed!\n");
    return 0;
}
