#include <stdio.h>

int main() {
    int N, i, j;

    while (scanf("%d", &N) != EOF) {
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {

                if (i == N / 2 && j == N / 2) {
                    printf("4");
                }
                else if (i >= N / 3 && i < N - N / 3 &&
                         j >= N / 3 && j < N - N / 3) {
                    printf("1");
                }
                else if (i == j) {
                    printf("2");
                }
                else if (i + j == N - 1) {
                    printf("3");
                }
                else {
                    printf("0");
                }
            }
            printf("\n");
        }

        printf("\n");
    }

    return 0;
}