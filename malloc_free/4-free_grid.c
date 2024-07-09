/**
 * free_grid - free each grid of a array
 * @grid: the grid
 * @height : The Columns
 */
#include <stdlib.h>

void free_grid(int **grid, int height) {
    if (grid == NULL) {
        return;  // Si grid est NULL, il n'y a rien à libérer
    }

    // Libérer chaque ligne de la grille
    for (int i = 0; i < height; i++) {
        free(grid[i]);
    }

    // Libérer le tableau de pointeurs principal
    free(grid);
}
