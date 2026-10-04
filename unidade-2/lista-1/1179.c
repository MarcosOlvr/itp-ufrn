#include <stdio.h>
 
int main() {
    int valor, pares = 0, impares = 0;
    int listaPares[5];
    int listaImpares[5];
    for (int i=0; i < 15; i++) {
        scanf("%d", &valor);
        if (valor % 2 == 0) {
            listaPares[pares] = valor;
            pares++;
            if (pares == 5) {
                for (int j=0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, listaPares[j]);
                    listaPares[j] = 0;
                }

                pares = 0;
            }
        }
        else {
            listaImpares[impares] = valor;
            impares++;
            if (impares == 5) {
                for (int j=0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, listaImpares[j]);
                    listaImpares[j] = 0;
                }

                impares = 0;
            }
        }
    }
    
    for (int i=0; i < impares; i++) {
        printf("impar[%d] = %d\n", i, listaImpares[i]);
    }

    for (int i=0; i < pares; i++) {
        printf("par[%d] = %d\n", i, listaPares[i]);
    }
    
    return 0;
}