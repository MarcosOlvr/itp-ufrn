#include <stdio.h>

int main() {
    int codigo, quantidade;
    double valor;

    scanf("%d %d", &codigo, &quantidade);

    switch (codigo)
    {
    case 1:
        valor = quantidade * 4;
        break;
    
    case 2:
        valor = quantidade * 4.50;
        break;

    case 3: 
        valor = quantidade * 5;
        break;

    case 4:
        valor = quantidade * 2;
        break;

    case 5:
        valor = quantidade * 1.50;
        break;

    default:
        break;
    }

    printf("Total: R$ %.2lf\n", valor);

    return 0;
}