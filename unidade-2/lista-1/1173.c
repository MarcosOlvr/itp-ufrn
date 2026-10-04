#include <stdio.h>
 
int main() {
    int valores[10];
    int valor;
    scanf("%d", &valor);
    
    valores[0] = valor;
    for (int i=1; i < 10; i++) {
        valor = valor * 2;
        valores[i] = valor;
    }
    
    for (int i=0; i < 10; i++) {
        printf("N[%d] = %d\n", i, valores[i]);
    }

    return 0;
}