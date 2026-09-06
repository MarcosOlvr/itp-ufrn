#include <stdio.h>

int main() {
    int horaInicial, minutoInicial, horaFinal, minutoFinal;
    int inicio, fim, duracao;
    int horasJogadas, minutosJogados;

    scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);

    inicio = horaInicial * 60 + minutoInicial;
    fim = horaFinal * 60 + minutoFinal;

    duracao = fim - inicio;
    
    if (duracao <= 0) {
        duracao += 24 * 60;
    }

    horasJogadas = duracao / 60;
    minutosJogados = duracao % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horasJogadas, minutosJogados);

    return 0;
}
