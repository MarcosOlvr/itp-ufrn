#include <stdio.h>
 
int main() {
    
    double a, b, c, areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo; 
    scanf("%lf %lf %lf", &a, &b, &c);

    areaTriangulo = (a * c) / 2;
    areaCirculo = 3.14159 * (c * c);
    areaTrapezio = ((a + b) * c) / 2;
    areaQuadrado = b * b;
    areaRetangulo = a * b;

    printf("TRIANGULO: %.3lf\n", areaTriangulo);
    printf("CIRCULO: %.3lf\n", areaCirculo);
    printf("TRAPEZIO: %.3lf\n", areaTrapezio);
    printf("QUADRADO: %.3lf\n", areaQuadrado);
    printf("RETANGULO: %.3lf\n", areaRetangulo);

    return 0;
}