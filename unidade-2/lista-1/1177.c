#include <stdio.h>
 
int main() {
 
    int valores[1000];
    int valor;

    while (1) {
        scanf("%d", &valor);

        if (valor >= 2 && valor <= 50) {
            break;
        }
    }

    for (int i=0; i < 1000; i++) {
        valores[i] = i%valor;
    }

    for (int j=0; j < 1000; j++) {
        printf("N[%d] = %d\n", j, valores[j]);
    }

    return 0;
}