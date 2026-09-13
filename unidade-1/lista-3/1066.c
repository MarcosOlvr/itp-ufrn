#include <stdio.h>

int main() {

    int a, b, c, d, e;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    
    int qtyPares = 0;
    int qtyImpares = 0;
    int qtyPositivos = 0;
    int qtyNegativos = 0;
    int numeros[] = {a,b,c,d,e};

    for (int i=0; i < 5; i++) {
        if (numeros[i] % 2 == 0) {
            qtyPares += 1;
        }
        else {
            qtyImpares += 1;
        }

        if (numeros[i] > 0) {
            qtyPositivos += 1;
        }
        if (numeros[i] < 0) {
            qtyNegativos += 1;
        }
    }

    printf("%d valor(es) par(es)\n", qtyPares); 
    printf("%d valor(es) impar(es)\n", qtyImpares); 
    printf("%d valor(es) positivo(s)\n", qtyPositivos); 
    printf("%d valor(es) negativo(s)\n", qtyNegativos); 

    return 0;
}