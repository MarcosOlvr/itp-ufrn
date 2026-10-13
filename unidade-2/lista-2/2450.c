#include <stdio.h>

int main() {
    int N, M;
    int matriz[500][500];
    int i, j;
    int anterior = -1;
    int atual;
    int escada = 1;

    scanf("%d %d", &N, &M);

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        atual = -1;

        for (j = 0; j < M; j++) {
            if (matriz[i][j] != 0) {
                atual = j;
                break;
            }
        }

        if (atual != -1) {
            if (atual <= anterior) {
                escada = 0;
                break;
            }

            anterior = atual;
        }
    }

    if (escada)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}