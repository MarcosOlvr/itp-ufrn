#include <stdio.h>

int main() {
    int N, i, j, valor;

    while (scanf("%d", &N) == 1 && N != 0) {
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                valor = i + 1;

                if (j + 1 < valor)
                    valor = j + 1;

                if (N - i < valor)
                    valor = N - i;

                if (N - j < valor)
                    valor = N - j;

                printf("%3d", valor);

                if (j < N - 1)
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}