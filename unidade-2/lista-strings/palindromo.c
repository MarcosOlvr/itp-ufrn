#include <stdio.h>
#include <string.h>
#include <ctype.h>

int eh_palindromo(const char frase[]);
void limpar_frase(const char frase[], char limpa[]);
void inverter(const char origem[], char destino[]);
void remover_quebra_de_linha(char s[]);

int main(void)
{
    char frase[202];

    if (fgets(frase, sizeof(frase), stdin) == NULL) {
        return 1;
    }

    remover_quebra_de_linha(frase);

    if (eh_palindromo(frase)) {
        printf("palindromo\n");
    } else {
        printf("nao e palindromo\n");
    }

    return 0;
}

void remover_quebra_de_linha(char s[])
{
    size_t tamanho = strlen(s);

    if (tamanho > 0 && s[tamanho - 1] == '\n') {
        s[tamanho - 1] = '\0';
    }
}

void limpar_frase(const char frase[], char limpa[])
{
    int j = 0;

    for (int i = 0; frase[i] != '\0'; i++) {
        if (isalpha((unsigned char) frase[i])) {
            limpa[j] = (char) tolower((unsigned char) frase[i]);
            j++;
        }
    }
    limpa[j] = '\0';
}

void inverter(const char origem[], char destino[])
{
    size_t tamanho = strlen(origem);

    for (size_t i = 0; i < tamanho; i++) {
        destino[i] = origem[tamanho - 1 - i];
    }
    destino[tamanho] = '\0';
}

int eh_palindromo(const char frase[])
{
    char limpa[202];
    char invertida[202];

    limpar_frase(frase, limpa);
    inverter(limpa, invertida);

    return strcmp(limpa, invertida) == 0;
}