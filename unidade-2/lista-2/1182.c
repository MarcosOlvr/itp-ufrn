#include <stdio.h>
 
int main() {
    
    int colunaParaAnalisar, i, j;
    char c;
    float valor, soma = 0;
    scanf("%d", &colunaParaAnalisar);
    scanf(" %c", &c);

    for (i=0; i < 12; i++) {
        for (j=0; j < 12; j++) {
            scanf("%f", &valor);
            if (j == colunaParaAnalisar) 
                soma += valor;
        }
    }

    if (c == 'S')
        printf("%.1f\n", soma);

    else
        printf("%.1f\n", soma/12);
 
    return 0;
}