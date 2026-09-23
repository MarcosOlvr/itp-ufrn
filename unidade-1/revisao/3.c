#include <stdio.h>
double taxa_da_regiao(char regiao);
double calcular_frete(double peso, char regiao);
char ler_regiao(void);
void exibir_fechamento(int quantidadeDeEncomendas, double frete);

int main(void) {
    double peso;
    int quantidadeDeEncomendas = 0;
    char regiao = 'L';
    double frete = 0.0;
    
    while (true) {
        printf("Peso (kg): ");
        scanf("%lf", &peso);
        
        if (peso == 0) {
            break;
        }

        regiao = ler_regiao();
        frete += calcular_frete(peso, regiao);
        quantidadeDeEncomendas++;
    }
    
    exibir_fechamento(quantidadeDeEncomendas, frete);
    return 0;
}

char ler_regiao(void) {
    char regiao;
    
    do {
        printf("Regiao (L, E ou N): ");
        scanf(" %c", &regiao);
    } while (regiao != 'L' && regiao != 'E' && regiao != 'N');

    return regiao;
}

double taxa_da_regiao(char regiao) {
    switch (regiao) {
        case 'L':
            return 4.50;

        case 'E':
            return 7.20;

        case 'N':
            return 11.0;

        default:
            return 0.0;
    }
}

double calcular_frete(double peso, char regiao) {
    double valor = 0.0;
    double taxa = taxa_da_regiao(regiao);

    valor = peso * taxa;

    if (peso >= 30) {
        valor = valor * 1.20;
    }

    return valor;
}

void exibir_fechamento(int quantidadeDeEncomendas, double frete) {
    printf("Quantidade de encomendas feitas: %d\n", quantidadeDeEncomendas);
    printf("Frete total do lote: R$%.2f\n", frete);
}