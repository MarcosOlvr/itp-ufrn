#include <stdio.h>
 
int main() {
 
    double primeiraNota, segundaNota, terceiraNota, media;
    scanf("%lf", &primeiraNota);
    scanf("%lf", &segundaNota);
    scanf("%lf", &terceiraNota);

    primeiraNota = primeiraNota * 2;
    segundaNota = segundaNota * 3;
    terceiraNota = terceiraNota * 5;

    media = (primeiraNota + segundaNota + terceiraNota) / 10;
    printf("MEDIA = %.1lf\n", media);
 
    return 0;
}