#include <stdio.h>
 
int main() {
 
    float primeiraNota, segundaNota, media;
    scanf("%f", &primeiraNota);
    scanf("%f", &segundaNota);

    primeiraNota = primeiraNota * 3.5;
    segundaNota = segundaNota * 7.5;
    media = (primeiraNota + segundaNota)/11;

    printf("MEDIA = %.5lf\n", media);

    return 0;
}