#include <stdio.h>
 
int main() {
 
    int valor;
    scanf("%d", &valor);

    if (valor % 2 == 0) {
        valor += 1;
    }
 
    for (int i=0; i < 6; i++) {
        printf("%d\n", valor);
        valor += 2;
    }

    return 0;
}