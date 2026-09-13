#include <stdio.h>

int main() {

    int a, b, c, d, e;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    
    int qtyPares = 0;
    int numeros[] = {a,b,c,d,e};

    for (int i=0; i < 5; i++) {
        if (numeros[i] % 2 == 0) {
            qtyPares += 1;
        }
    }

    printf("%d valores pares\n", qtyPares);

    return 0;
}