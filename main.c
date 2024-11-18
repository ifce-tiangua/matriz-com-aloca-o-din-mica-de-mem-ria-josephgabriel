#include <stdio.h>
#include <stdlib.h>

int main() {

    int L, C;

    scanf("%d", &L);

    scanf("%d", &C);


    int **matriz = (int **)malloc(L * sizeof(int*));

    for (int i = 0; i < L; i++) {
        matriz[i] = (int*)malloc(C * sizeof(int));
    }

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {

            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < L; i++) {
        free(matriz[i]);
    }
	
    free(matriz);

    return 0;
}
