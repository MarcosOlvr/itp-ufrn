#include <stdio.h>
 
int main() {
 
    float primeiraNota, segundaNota, terceiraNota, quartaNota, media, exame;
    scanf("%f %f %f %f", &primeiraNota, &segundaNota, &terceiraNota, &quartaNota);

    primeiraNota *= 2;
    segundaNota *= 3;
    terceiraNota *= 4;
    quartaNota *= 1;
 
    media = (primeiraNota + segundaNota + terceiraNota + quartaNota) / 10;

    if (media >= 7) {
        printf("Media: %.1lf\n", media);
        printf("Aluno aprovado.\n");
    }

    else if (media < 5) {
        printf("Media: %.1lf\n", media);
        printf("Aluno reprovado.\n");
    }

    else if (media >= 5 && media < 7) {
        printf("Media: %.1lf\n", media);
        printf("Aluno em exame.\n");
        scanf("%f", &exame);

        printf("Nota do exame: %.1lf\n", exame);
        media = (media + exame) / 2;

        if (media >= 5) {
            printf("Aluno aprovado.\n");
        }
        
        else {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1lf\n", media);
    }

    return 0;
}