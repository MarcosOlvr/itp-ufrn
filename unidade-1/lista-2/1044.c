#include <stdio.h>

int main() {
    int primeiroValor, segundoValor;
    scanf("%d %d", &primeiroValor, &segundoValor);

    if (primeiroValor % segundoValor == 0 || segundoValor % primeiroValor == 0) {
        printf("Sao Multiplos\n");
    }
    else {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}