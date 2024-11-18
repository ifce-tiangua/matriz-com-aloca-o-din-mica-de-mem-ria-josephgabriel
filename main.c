#include <stdio.h>
#include <stdlib.h>

int main() {

    int L, C, *matriz;

    scanf("%d", &L);

    scanf("%d", &C);

    matriz = (int *)malloc(L * C * sizeof(int));


    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {

            scanf("%d", &matriz[i * C + j]);
        }
    }

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d ", matriz[i * C + j]);
        }
        printf("\n");
    }

    free(matriz);

    return 0;
}
