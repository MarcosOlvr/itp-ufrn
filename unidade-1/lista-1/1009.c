#include <stdio.h>
 
int main() {
 
    char nome[50];
    scanf("%49s", nome);
    
    double salarioFixo, totalDeVendas, salario;
    scanf("%lf", &salarioFixo);
    scanf("%lf", &totalDeVendas);
 
    salario = salarioFixo + (totalDeVendas * 0.15);
    printf("TOTAL = R$ %.2lf\n", salario);

    return 0;
}