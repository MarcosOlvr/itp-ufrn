#include <stdio.h>
#include <stdlib.h>

int separar_tempo(int total, int *h, int *m, int *s);

int main(void)
{
    int n;
    int *tempos;
    int soma = 0;
    int melhor = -1;
    int validas = 0;
    int h, m, s;

    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    tempos = (int *) malloc((n + (n == 0)) * sizeof(int));
    if (tempos == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &tempos[i]) != 1) {
            free(tempos);
            return 1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (separar_tempo(tempos[i], &h, &m, &s)) {
            printf("volta %d: %dh%02dm%02ds\n", i + 1, h, m, s);
            soma += tempos[i];
            validas++;
            if (melhor == -1 || tempos[i] < melhor) {
                melhor = tempos[i];
            }
        } else {
            printf("volta %d: invalida\n", i + 1);
        }
    }

    if (validas == 0) {
        printf("nenhuma volta valida\n");
    } else {
        separar_tempo(soma, &h, &m, &s);
        printf("total: %dh%02dm%02ds\n", h, m, s);
        separar_tempo(melhor, &h, &m, &s);
        printf("melhor: %dh%02dm%02ds\n", h, m, s);
    }

    free(tempos);
    return 0;
}

int separar_tempo(int total, int *h, int *m, int *s)
{
    if (total < 0) {
        return 0;
    }
    *h = total / 3600;
    *m = (total % 3600) / 60;
    *s = total % 60;
    return 1;
}