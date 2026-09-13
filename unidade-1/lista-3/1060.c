#include <stdio.h>

int main() {

    float a, b, c, d, e, f;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);
    scanf("%f", &f);
    
    int qtyPositivos = 0;
    float numeros[] = {a,b,c,d,e,f};

    for (int i = 0; i < 6; i++) {
        if (numeros[i] > 0) {
            qtyPositivos += 1;
        } 
    }
    
    printf("%d valores positivos\n", qtyPositivos);

    return 0;
}