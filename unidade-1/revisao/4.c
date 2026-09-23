#include <stdio.h>

int pontos_da_rodada(int gols_feitos, int gols_sofridos);
int ler_gols(void);
double calcular_aproveitamento(int pontos, int jogos_disputados);
void exibir_campanha(int pontos, int jogos_disputados, double aproveitamento);

int main(void) {
    int gols_feitos = 0;
    int gols_sofridos = 0;
    int rodadas_jogadas = 0;
    int total_de_pontos = 0;
    double aproveitamento = 0.0;
    
    printf("Quantas rodadas o time jogou? ");
    scanf("%d", &rodadas_jogadas);

    for (int i=0; i < rodadas_jogadas; i++) {
        printf("Gols feitos na partida %d: ", i+1);
        gols_feitos = ler_gols();
    
        printf("Gols sofridos na partida %d: ", i+1);
        gols_sofridos = ler_gols();

        total_de_pontos += pontos_da_rodada(gols_feitos, gols_sofridos);
    }

    aproveitamento = calcular_aproveitamento(total_de_pontos, rodadas_jogadas);
    exibir_campanha(total_de_pontos, rodadas_jogadas, aproveitamento);

    return 0;
}

int pontos_da_rodada(int gols_feitos, int gols_sofridos) {
    if (gols_feitos > gols_sofridos) {
        return 3;
    }
    else if (gols_feitos == gols_sofridos) {
        return 1;
    }
    
    return 0;
}

int ler_gols(void) {
    int gols = 0;

    do {
        scanf("%d", &gols);
    } while (gols < 0);

    return gols;
}

double calcular_aproveitamento(int pontos, int jogos_disputados) {
    int pontos_disputados = jogos_disputados * 3;

    return ((double)pontos / pontos_disputados) * 100;
}

void exibir_campanha(int pontos,  int jogos_disputados, double aproveitamento) {
    printf("JOGOS DISPUTADOS: %d\n", jogos_disputados);
    printf("PONTOS GANHOS: %d\n", pontos);
    printf("APROVEITAMENTO DE %.1lf%%\n", aproveitamento);
}