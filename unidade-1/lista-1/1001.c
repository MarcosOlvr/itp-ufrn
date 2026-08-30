#include <stdio.h>
 
int main() {
    int primeiro_valor, segundo_valor;
    scanf("%d", &primeiro_valor);
    scanf("%d", &segundo_valor);
 
    int resultado = primeiro_valor + segundo_valor;
    printf("X = %d\n", resultado);

    return 0;
}