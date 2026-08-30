#include <stdio.h>
 
int main() {
 
    int primeiroValor, segundoValor, terceiroValor, quartoValor, resultado;
    scanf("%d", &primeiroValor);
    scanf("%d", &segundoValor);
    scanf("%d", &terceiroValor);
    scanf("%d", &quartoValor);
    
    resultado = (primeiroValor * segundoValor) - (terceiroValor * quartoValor);
    printf("DIFERENCA = %d\n", resultado);

    return 0;
}