#include <stdio.h>
 
int main() {
 
    int numeroFuncionario, horas; 
    double valorPorHora, salario;
    scanf("%d", &numeroFuncionario);
    scanf("%d", &horas);
    scanf("%lf", &valorPorHora);

    salario = valorPorHora * horas;

    printf("NUMBER = %d\n", numeroFuncionario);
    printf("SALARY = U$ %.2lf\n", salario);
 
    return 0;
}