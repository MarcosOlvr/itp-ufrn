#include <stdio.h>

int main() {
    int N, M;
    int matriz[500][500];
    int i, j;
    int colunaAnterior = -1;
    int colunaAtual;
    int encontrouLinhaZero = 0;
    int escada = 1;

    scanf("%d %d", &N, &M);

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        colunaAtual = -1;

        for (j = 0; j < M; j++) {
            if (matriz[i][j] != 0) {
                colunaAtual = j;
                break;
            }
        }

        if (colunaAtual == -1) {
            encontrouLinhaZero = 1;
        } else {
            if (encontrouLinhaZero ||
                colunaAtual <= colunaAnterior) {
                escada = 0;
                break;
            }

            colunaAnterior = colunaAtual;
        }
    }

    if (escada)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}