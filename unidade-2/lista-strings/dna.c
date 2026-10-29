#include <stdio.h>
#include <string.h>
#include <ctype.h>

void remover_quebra_de_linha(char dna[]);
void colocar_em_maiusculo(char dna[]);
int contar_base(const char dna[], char base);

int main(void)
{
    char dna[101];

    if (fgets(dna, sizeof(dna), stdin) == NULL) {
        return 1;
    }

    remover_quebra_de_linha(dna);
    colocar_em_maiusculo(dna);

    printf("tamanho: %zu\n", strlen(dna));
    printf("A: %d, C: %d, G: %d, T: %d\n", contar_base(dna, 'A'), contar_base(dna, 'C'), contar_base(dna, 'G'), contar_base(dna, 'T'));

    return 0;
}

void remover_quebra_de_linha(char dna[])
{
    size_t tamanho = strlen(dna);

    if (tamanho > 0 && dna[tamanho - 1] == '\n') {
        dna[tamanho - 1] = '\0';
    }
}

void colocar_em_maiusculo(char dna[])
{
    for (int i = 0; dna[i] != '\0'; i++) {
        dna[i] = (char) toupper((unsigned char) dna[i]);
    }
}

int contar_base(const char dna[], char base)
{
    int contagem = 0;

    for (int i = 0; dna[i] != '\0'; i++) {
        if (dna[i] == base) {
            contagem++;
        }
    }
    return contagem;
}