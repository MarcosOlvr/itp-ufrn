#include <stdio.h>
 
int main() {
 
    double renda, imposto;
    scanf("%lf", &renda);

    if (renda >= 0 && renda <= 2000) {
        imposto = 0;
    }
    else if (renda > 2000 && renda <= 3000) {
        renda -= 2000;
        imposto = renda * 0.08;
    }
    else if (renda > 3000 && renda <= 4500) {
        renda -= 3000;
        imposto = (1000 * 0.08) + renda * 0.18;
    }
    else {
        renda -= 4500;
        imposto = (1000 * 0.08) + (1500 * 0.18) + (renda * 0.28);
    }

    if (imposto == 0) {
        printf("Isento\n");
    }
    else {
        printf("R$ %.2lf\n", imposto);
    }
 
    return 0;
}