#include <stdio.h>
 
int main() {
 
    int primeiroValor, segundoValor, prod; 
    scanf("%d", &primeiroValor);
    scanf("%d", &segundoValor);

    prod = primeiroValor * segundoValor;
    printf("PROD = %d\n", prod);
 
    return 0;
}