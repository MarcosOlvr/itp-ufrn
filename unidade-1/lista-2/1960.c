#include <stdio.h>

int main() {
    int paginas;

    scanf("%d", &paginas);

    while (paginas >= 900) {
        printf("CM");
        paginas -= 900;
    }

    while (paginas >= 500) {
        printf("D");
        paginas -= 500;
    }

    while (paginas >= 400) {
        printf("CD");
        paginas -= 400;
    }

    while (paginas >= 100) {
        printf("C");
        paginas -= 100;
    }

    while (paginas >= 90) {
        printf("XC");
        paginas -= 90;
    }

    while (paginas >= 50) {
        printf("L");
        paginas -= 50;
    }

    while (paginas >= 40) {
        printf("XL");
        paginas -= 40;
    }

    while (paginas >= 10) {
        printf("X");
        paginas -= 10;
    }

    while (paginas >= 9) {
        printf("IX");
        paginas -= 9;
    }

    while (paginas >= 5) {
        printf("V");
        paginas -= 5;
    }

    while (paginas >= 4) {
        printf("IV");
        paginas -= 4;
    }

    while (paginas >= 1) {
        printf("I");
        paginas -= 1;
    }

    printf("\n");

    return 0;
}
