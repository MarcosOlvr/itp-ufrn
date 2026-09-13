#include <stdio.h>
 
int main() {
 
    int primeiroValor, segundoValor, i, maiorValor;
    scanf("%d %d", &primeiroValor, &segundoValor);
    int somaValoresImpares = 0;
    
    if (segundoValor > primeiroValor) {
        i = primeiroValor + 1;
        maiorValor = segundoValor;
    }
    else {
        i = segundoValor + 1;
        maiorValor = primeiroValor;
    }

    for (i; i < maiorValor; i++) {
        if (i % 2 != 0) {
            somaValoresImpares += i;
        }
    }
    
    printf("%d\n", somaValoresImpares);

    return 0;
}