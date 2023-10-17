#include <stdio.h>
#include <stdlib.h>

void    *ft_calloc(size_t nbrelement, size_t elementsize)
{
    size_t index;
    void *tableau_malloc;
    index = 0;
    tableau_malloc = malloc(nbrelement * elementsize);

    if (tableau_malloc != 0)
        while (index < nbrelement)
       {
         ((char*)tableau_malloc)[index * elementsize] = 0;
         index++;
       }
    return (tableau_malloc);
}
/*
int main() {
    // Utilisation de calloc
    int* tableau_calloc = (int*)calloc(5, sizeof(int));
    if (tableau_calloc != NULL) {
        for (int i = 0; i < 5; i++) {
            tableau_calloc[i] = i + 1;
        }

        printf("Tableau alloué avec calloc :\n");
        for (int i = 0; i < 5; i++) {
            printf("%d ", tableau_calloc[i]);
        }

        free(tableau_calloc);
    } else {
        printf("Erreur lors de l'allocation de mémoire avec calloc.\n");
    }

    return 0;
}
*/