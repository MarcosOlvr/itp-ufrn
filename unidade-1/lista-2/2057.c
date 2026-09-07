#include <stdio.h>
 
int main() {
 
    int saida, tempoDeViagem, fuso, chegada;
    scanf("%d %d %d", &saida, &tempoDeViagem, &fuso);
 
    chegada = (saida + tempoDeViagem) + fuso;

    if (chegada < 0) {
        chegada += 24;
    }

    if (chegada > 24) {
        chegada -= 24;
    }

    if (chegada == 24) {
        chegada = 0;
    }

    printf("%d\n", chegada);

    return 0;
}