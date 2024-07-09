/**
 * _strdup - Duplicate a *char
 * @str: The char we looking to duplicate
 * Return: Return the copy
 */
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str) {
    // Vérifier si str est NULL
    if (str == NULL) {
        return NULL;
    }

    // Obtenir la longueur de la chaîne str
    size_t len = strlen(str);

    // Allouer de la mémoire pour la copie de la chaîne (incluant le caractère nul)
    char *copy = (char *)malloc((len + 1) * sizeof(char));
    if (copy == NULL) {
        return NULL; // Échec de l'allocation
    }

    // Copier la chaîne str dans la mémoire allouée
    strcpy(copy, str);

    return copy;