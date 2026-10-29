#include <stdio.h>
#include <string.h>
#include <ctype.h>

void remover_quebra_de_linha(char s[]);

void colocar_em_minusculo(char s[]);

void montar_email(char nome[], char email[]);

int main(void)
{
    char nome[64];
    char email[100];

    if (fgets(nome, sizeof(nome), stdin) == NULL) {
        return 1;
    }

    remover_quebra_de_linha(nome);
    montar_email(nome, email);

    printf("email: %s\n", email);

    return 0;
}

void remover_quebra_de_linha(char s[])
{
    size_t tamanho = strlen(s);

    if (tamanho > 0 && s[tamanho - 1] == '\n') {
        s[tamanho - 1] = '\0';
    }
}

void colocar_em_minusculo(char s[])
{
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = (char) tolower((unsigned char) s[i]);
    }
}

void montar_email(char nome[], char email[])
{
    char *primeiro = NULL;
    char *ultimo = NULL;
    char *pedaco = strtok(nome, " ");

    while (pedaco != NULL) {
        if (primeiro == NULL) {
            primeiro = pedaco;
        }
        ultimo = pedaco;
        pedaco = strtok(NULL, " ");
    }

    email[0] = '\0';
    if (primeiro == NULL) {
        return;
    }

    strcpy(email, primeiro);
    if (ultimo != primeiro) {
        strcat(email, ".");
        strcat(email, ultimo);
    }
    strcat(email, "@ufrn.edu.br");

    colocar_em_minusculo(email);
}