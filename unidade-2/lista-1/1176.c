#include <stdio.h>

int main() {
    long long fib[61];

    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= 60; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    int valor;
    scanf("%d", &valor);

    while (valor--) {
        int x;
        scanf("%d", &x);

        printf("Fib(%d) = %lld\n", x, fib[x]);
    }

    return 0;
}