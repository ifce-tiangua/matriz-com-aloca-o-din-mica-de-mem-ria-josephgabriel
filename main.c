#include <stdio.h>
#include <stdlib.h>

int main() {
    int L, C, *matriz;


    scanf("%d", &L);
    scanf("%d", &C);


    matriz = malloc(L * C * sizeof(int));


    if (matriz == NULL) {
        printf("Erro na alocação de memória!\n");
        return 1;
    }


    if (L == 0 || C == 0) {
        printf("[matriz vazia]\n");
        free(matriz);
        return 0;
    } else {

        for (int i = 0; i < L; i++) {
            for (int j = 0; j < C; j++) {
                scanf("%d", &matriz[i * C + j]);
            }
        }


        for (int i = 0; i < L; i++) {
            for (int j = 0; j < C; j++) {
                if (i == 0 || i == L - 1 || j == 0 || j == C - 1) {
                    printf("%d", matriz[i * C + j]);


                    if (j < C - 1) {
                        printf(" ");
                    }
                }
            }

            if (i < L - 1) {
                printf("\\n");
            }
        }
    }


    free(matriz);
    return 0;
}
