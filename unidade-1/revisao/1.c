#include <stdio.h>

double ler_valor_da_compra(void);
double desconto_por_pontos(int pontos);
double exibir_extrato(double total, int pontos, double desconto);
int calcular_pontos(double total);

int main(void) {
    int pontos = 0;
    double total = 0.0;
    double desconto = 0.0;
    int compras = 0;

    printf("Quantas compras houve hoje?\n");
    scanf("%d", &compras);

    for(int i=0; i < compras; i++) {
        total = total + ler_valor_da_compra();
    }

    pontos = calcular_pontos(total);
    desconto = desconto_por_pontos(pontos);
    exibir_extrato(total, pontos, desconto);
    
    return 0;
}


int calcular_pontos(double total) {
    return (int) total;
}
    
double desconto_por_pontos(int pontos) {
    if(pontos >= 1000) {
        return 0.15;
    }
    else if(pontos >= 500) {
        return 0.10;
    }
    else if (pontos >= 200) {
        return 0.05;
    }
    
    return 0.0;
}

double ler_valor_da_compra(void) {
    double valor = 0.0;

    do {
        printf("Valor da compra:\n");
        scanf("%lf", &valor);
    } while (valor < 0.0);

    return valor;
}


double exibir_extrato(double total, int pontos, double desconto) {
    printf("total gasto no dia: R$%.2f\n", total);
    printf("pontos acumulados: %d\n", pontos);
    printf("desconto de %.1f%%, com total a pagar: R$%.2f\n", desconto * 100.0, total * (1.0 - desconto));
}