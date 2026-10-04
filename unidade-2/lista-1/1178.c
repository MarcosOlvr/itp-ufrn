#include <stdio.h>
 
int main() {
 
    double valores[100];
    double valor;
    scanf("%lf", &valor);
    valores[0] = valor;

    for (int i=1; i < 100; i++) {
        valor = valor / 2;
        valores[i] = valor;
    }

    for (int j=0; j < 100; j++) {
        printf("N[%d] = %.4lf\n", j, valores[j]);
    }
    
    return 0;
}