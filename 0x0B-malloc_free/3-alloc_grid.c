#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: a 2D array
 */
int **alloc_grid(int width, int height) {
    int **tab, i, j;
    
    if (width < 0 || height < 0) {
        return (NULL);
    }

    tab = malloc(sizeof(*tab) * height);

    if (tab == NULL) {
        return (NULL); // Memory allocation failed
    }

    for (i = 0; i < height; i++) {
        tab[i] = malloc(sizeof(**tab) * width);

        if (tab[i] == NULL) {
            while (i >= 0) {
                free(tab[i]);
                i--;
            }
            free(tab);
            return (NULL); // Memory allocation for a row failed
        }

        for (j = 0; j < width; j++) {
            tab[i][j] = 0;
        }
    }

    return (tab);
}