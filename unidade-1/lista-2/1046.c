#include <stdio.h>
 
int main() {
 
    int comeco, final, tempo;
    scanf("%d %d", &comeco, &final);

    if (final > comeco) {
        tempo = final - comeco;
    }
    else {
        tempo = (24 - comeco) + final;
    }

    printf("O JOGO DUROU %d HORA(S)\n", tempo);
    
    return 0;
}