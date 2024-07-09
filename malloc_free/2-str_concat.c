/**
 * str_concat - concat two *char
 * @s1: the first char
 * @s2: Theh second one
 * Return: Return the contatened result
 */
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2) {
    // Traiter s1 et s2 si l'un d'eux est NULL
    if (s1 == NULL) s1 = "";
    if (s2 == NULL) s2 = "";

    // Calculer les longueurs de s1 et s2
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);

    // Allouer de la mémoire pour la nouvelle chaîne (incluant le caractère nul)
    char *concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    if (concatenated == NULL) {
        return NULL; // Échec de l'allocation
    }

    // Copier s1 et s2 dans la nouvelle chaîne
    strcpy(concatenated, s1);
    strcat(concatenated, s2);

    return concatenated;
}
