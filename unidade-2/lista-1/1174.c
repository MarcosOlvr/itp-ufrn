#include <stdio.h>
 
int main() {
    float valores[100];
    float valor;
    for (int i=0; i < 100; i++) {
        scanf("%f", &valor);
        valores[i] = valor;
    }
    
    for (int j=0; j < 100; j++) {
        if (valores[j] <=  10) {
            printf("A[%d] = %.1f\n", j, valores[j]);
        }
    }

    return 0;
}