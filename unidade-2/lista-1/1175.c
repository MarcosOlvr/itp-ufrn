#include <stdio.h>
 
int main() {
    int valoresDeEntrada[20];
    int novoValores[20];
    int valor;
    
    for (int i=0; i < 20; i++) {
        scanf("%d", &valor);
        valoresDeEntrada[i] = valor;
    }

    for (int i=0; i < 20; i++) {
        novoValores[i] = valoresDeEntrada[19-i];
    }

    for (int i=0; i < 20; i++) {
        printf("N[%d] = %d\n", i, novoValores[i]);
    }

    return 0;
}