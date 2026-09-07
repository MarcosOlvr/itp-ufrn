#include <stdio.h>
 
int main() {
 
    int primeiroValor, segundoValor, terceiroValor, x;
    scanf("%d %d %d", &primeiroValor, &segundoValor, &terceiroValor);

    if (segundoValor > primeiroValor && segundoValor > terceiroValor) {
        x = primeiroValor;
        primeiroValor = segundoValor;
        segundoValor = x;
    }
    else if (terceiroValor > primeiroValor && terceiroValor > segundoValor) {
        x = primeiroValor;
        primeiroValor = terceiroValor;
        terceiroValor = x;
    }

    if (primeiroValor < segundoValor + terceiroValor && segundoValor < primeiroValor + terceiroValor && terceiroValor < primeiroValor + segundoValor) {
        if (primeiroValor == segundoValor && primeiroValor == terceiroValor) {
            printf("Valido-Equilatero\n");
        }
        else if (primeiroValor == segundoValor || segundoValor == terceiroValor || primeiroValor == terceiroValor) {
            printf("Valido-Isoceles\n");
        }
        else {
            printf("Valido-Escaleno\n");
        }
        
        if ((primeiroValor * primeiroValor) == (segundoValor * segundoValor) + (terceiroValor * terceiroValor)) {
            printf("Retangulo: S\n");
        }
        else {
            printf("Retangulo: N\n");
        }
    }
    else {
        printf("Invalido\n");
    }
 
    return 0;
}