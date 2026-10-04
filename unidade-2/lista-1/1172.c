#include <stdio.h>
 
int main() {
    int valor;
    int valores[10];
    for (int i=0; i < 10; i++) {
        scanf("%d", &valor);
        valores[i] = valor;
    }

    for (int i=0; i < 10; i++) {
        if (valores[i] < 0 || valores[i] == 0) {
            valores[i] = 1;
        }
    }

    for (int i=0; i < 10; i++) {
        printf("X[%d] = %d\n", i, valores[i]);
    }
 
    return 0;
}