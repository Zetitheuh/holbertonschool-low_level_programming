/**
 * alloc_grid - Allocates a 2D array of integers
 * @width: Width of the grid
 * @height: Height of the grid
 *
 * Return: Pointer to the allocated 2D array (grid), or NULL on failure
 */
#include <stdlib.h>

int **alloc_grid(int width, int height) {
    if (width <= 0 || height <= 0) {
        return NULL;  // Vérifie si les dimensions sont valides
    }

    // Allouer le tableau de pointeurs (tableau principal)
    int **grid = (int **)malloc(height * sizeof(int *));
    if (grid == NULL) {
        return NULL;  // Échec de l'allocation du tableau principal
    }

    // Allouer et initialiser chaque ligne du tableau bidimensionnel
    for (int i = 0; i < height; i++) {
        grid[i] = (int *)malloc(width * sizeof(int));
        if (grid[i] == NULL) {
            // Échec de l'allocation d'une ligne, libérer la mémoire précédemment allouée
            for (int j = 0; j < i; j++) {
                free(grid[j]);
            }
            free(grid);
            return NULL;
        }
        // Initialiser la ligne à zéro
        for (int j = 0; j < width; j++) {
            grid[i][j] = 0;
        }
    }

    return grid;  // Retourner le tableau bidimensionnel alloué
}
