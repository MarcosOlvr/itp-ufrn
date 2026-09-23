#include <stdio.h>
#include <stdbool.h>

int situacao_do_nivel(double percentual);
void exibir_alerta(int situacao);
void exibir_fechamento(double menor_nivel, int leituras_criticas);

int main(void) {
    double percentual = 0.0;
    double menor_nivel = 100.0;
    int leituras_criticas = 0;
    
    while (true) {
        int situacao;
        
        printf("Nivel da caixa (%%): ");
        scanf("%lf", &percentual);
        
        if (percentual < 0) {
            break;
        }

        situacao = situacao_do_nivel(percentual);
        exibir_alerta(situacao);

        if (situacao == 0) {
            leituras_criticas += 1;
        }

        if (percentual < menor_nivel) {
            menor_nivel = percentual;
        }
    }
    
    exibir_fechamento(menor_nivel, leituras_criticas);

    return 0;
}

int situacao_do_nivel(double percentual) {
    if (percentual >= 40.0) {
        return 2;
    }
    else if (percentual >= 15.0) {
        return 1;
    }
    
    return 0;
}

void exibir_alerta(int situacao) {
    if (situacao == 2) {
        printf("nivel normal\n");
    }
    else if (situacao == 1) {
        printf("nivel baixo\n");
    }
    else {
        printf("nivel critico\n");
    }
}

void exibir_fechamento(double menor_nivel, int leituras_criticas) {
    printf("menor nivel registrado foi: %.1f\n", menor_nivel);
    printf("quantidade de leituras criticas: %d\n", leituras_criticas);
}