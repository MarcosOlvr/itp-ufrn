#include <stdio.h>

int main() {

    float a, b, c, d, e, f, media;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);
    scanf("%f", &f);
    
    int qtyPositivos = 0;
    float somaPositivos = 0;
    float numeros[] = {a,b,c,d,e,f};

    for (int i = 0; i < 6; i++) {
        if (numeros[i] > 0) {
            qtyPositivos += 1;
            somaPositivos += numeros[i];
        } 
    }
    
    media = somaPositivos / qtyPositivos;

    printf("%d valores positivos\n", qtyPositivos);
    printf("%.1lf\n", media);

    return 0;
}