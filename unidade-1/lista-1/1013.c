#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int a, b, c, maiorValor; 
    scanf("%d %d %d", &a, &b, &c);
    
    maiorValor = (a + b + abs(a-b)) / 2;

    if (maiorValor < c) {
        maiorValor = c;
    }

    printf("%d eh o maior\n", maiorValor);

    return 0;
}