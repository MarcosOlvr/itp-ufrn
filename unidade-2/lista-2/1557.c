#include <stdio.h>

int main() {
    int N, i, j, valor, maiorValor, digitos;

    while (scanf("%d", &N) == 1 && N != 0) {
        maiorValor = 1 << (2 * N - 2);
        digitos = 0;

        valor = maiorValor;
        do {
            digitos++;
            valor /= 10;
        } while (valor > 0);

        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                valor = 1 << (i + j);

                if (j == 0)
                    printf("%*d", digitos, valor);
                else
                    printf(" %*d", digitos, valor);
            }
            printf("\n");
        }

        printf("\n");
    }

    return 0;
}