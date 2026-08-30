#include <stdio.h>
 
int main() {
    int distancia; 
    float combustivelGasto, consumoMedio;
    
    scanf("%d", &distancia);
    scanf("%f", &combustivelGasto);
    consumoMedio = distancia / combustivelGasto;

    printf("%.3lf km/l\n", consumoMedio);
    
    return 0;
}