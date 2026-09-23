#include <stdio.h>
int classificar_chuva(double milimetros);
double ler_chuva_do_dia(int dia);
double calcular_media(double chuvaNaSemana);
void exibir_resumo(double chuvaNaSemana, double media, int chuvaForteNaSemana);

int main(void) {
    double chuva = 0.0;
    double media = 0.0;
    double chuvaNaSemana = 0.0;
    int chuvaForteNaSemana = 0;

    for (int i=0; i < 7; i++) {
        chuva = ler_chuva_do_dia(i);
        if (classificar_chuva(chuva) == 3) {
            chuvaForteNaSemana += 1;
        }

        chuvaNaSemana += chuva;
    }

    media = calcular_media(chuvaNaSemana);
    exibir_resumo(chuvaNaSemana, media, chuvaForteNaSemana);

    return 0;
}

int classificar_chuva(double milimetros) {
    if (milimetros >= 10) {
        return 3;
    }

    else if (milimetros >= 2.5) {
        return 2;
    }
    
    else if (milimetros == 0.0) {
        return 0;
    }

    return 1;
}

double ler_chuva_do_dia(int dia) {
    double chuva = 0.0;
    
    do {
        printf("Chuva do dia %d (mm): \n", dia+1);
        scanf("%lf", &chuva);
    } while(chuva < 0.0);

    return chuva;
}

double calcular_media(double chuvaNaSemana) {
    return chuvaNaSemana / 7;
}

void exibir_resumo(double chuvaNaSemana, double media, int chuvaForteNaSemana) {
    printf("total de milimetros na semana: %.2f\n", chuvaNaSemana);
    printf("media semanal de milimetros: %.1f\n", media);
    printf("%d dia(s) de chuvas fortes nessa semana\n", chuvaForteNaSemana);
}