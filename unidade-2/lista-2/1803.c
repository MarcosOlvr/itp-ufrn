#include <stdio.h>
#include <string.h>

int main() {
    char matriz[4][100];
    int valores[100];
    int i, j, tamanho;
    int F, L, C;

    for (i = 0; i < 4; i++) {
        scanf("%s", matriz[i]);
    }

    tamanho = strlen(matriz[0]);

    for (j = 0; j < tamanho; j++) {
        valores[j] = 0;

        for (i = 0; i < 4; i++) {
            valores[j] = valores[j] * 10
                       + (matriz[i][j] - '0');
        }
    }

    F = valores[0];
    L = valores[tamanho - 1];

    for (j = 1; j < tamanho - 1; j++) {
        C = (F * valores[j] + L) % 257;
        printf("%c", C);
    }

    printf("\n");

    return 0;
}