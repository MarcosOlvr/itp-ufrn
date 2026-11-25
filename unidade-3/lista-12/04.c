/*
perigoso:
 se o realloc falhar, v vira NULL e há memory leak, ou seja,
 o bloco antigo continua alocado, mas seu endereço foi perdido.
 
 como evitar: 
 o resultado do realloc vai para um ponteiro novo. 
 apenas se o novo ponteiro não for NULL ele passa a ser v. Se for NULL,
 v ainda aponta para o bloco válido, que é liberado com free(v) antes de
 devolver NULL, evitando memory leak.
 */

#include <stdio.h>
#include <stdlib.h>

int *ler_leituras(int *n, int *cap);

int main(void)
{
    int n = 0, cap = 0;
    int *v;
    long long soma = 0;

    v = ler_leituras(&n, &cap);
    if (v == NULL) {
        return 1;
    }

    if (n == 0) {
        printf("nenhuma leitura\n");
    } else {
        for (int i = 0; i < n; i++) {
            soma += v[i];
        }

        printf("leituras: %d\n", n);
        printf("capacidade: %d\n", cap);
        printf("acima da media:");
        for (int i = 0; i < n; i++) {
            if ((long long) v[i] * n > soma) {
                printf(" %d", v[i]);
            }
        }
        printf("\n");
    }

    free(v);
    return 0;
}

int *ler_leituras(int *n, int *cap)
{
    int *v, *novo;
    int valor;
    int quantidade = 0;
    int capacidade = 4;

    v = (int *) malloc(capacidade * sizeof(int));
    if (v == NULL) {
        return NULL;
    }

    while (scanf("%d", &valor) == 1 && valor != -1) {
        if (quantidade == capacidade) {
            novo = (int *) realloc(v, 2 * capacidade * sizeof(int));
            if (novo == NULL) {
                free(v);
                return NULL;
            }
            v = novo;
            capacidade *= 2;
        }
        v[quantidade++] = valor;
    }

    *n = quantidade;
    *cap = capacidade;
    return v;
}