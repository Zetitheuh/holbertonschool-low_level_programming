#include <main.h>
#include <stdlib.h>
/**
 * create_array - create an array of char
 * @size: The size of the array
 * @c: the type of tab element
 * Return: Return the array
 */
char *create_array(unsigned int size, char c) {
    // Vérifier si size est égal à 0
    if (size == 0) {
        return NULL;
    }

    //allocate memory for the char array
    char *arr = (char *)malloc(size * sizeof(char));
    if (arr == NULL) {
        return NULL; // Échec de l'allocation
    }

    // init each element of the tab with a char c
    for (unsigned int i = 0; i < size; i++) {
        arr[i] = c;
    }
    //Return the array
    return arr;
}