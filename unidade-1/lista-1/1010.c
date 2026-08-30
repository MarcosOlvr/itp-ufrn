#include <stdio.h>
 
int main() {
 
    int codigo, numeroDePecas;
    double valorPeca, valorTotal;
    scanf("%d %d %lf", &codigo, &numeroDePecas, &valorPeca);
    
    valorTotal = valorPeca * numeroDePecas;

    scanf("%d %d %lf", &codigo, &numeroDePecas, &valorPeca);

    valorTotal += valorPeca * numeroDePecas;

    printf("VALOR A PAGAR: R$ %.2lf\n", valorTotal);

    return 0;
}