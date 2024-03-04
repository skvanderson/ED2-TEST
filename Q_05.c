//questão 05

#include <stdio.h>
#include <math.h>

void calcularRaizes(float a, float b, float c) {
    float delta = b * b - 4 * a * c;
    if (delta >= 0) {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        printf("A função tem raízes reais.\n");
        printf("Raiz 1: %.2f\n", x1);
        printf("Raiz 2: %.2f\n", x2);
    } else {
        printf("A função não tem raízes reais.\n");
    }
}

int main() {
    float coef_a, coef_b, coef_c;

    printf("Digite os coeficientes da função do segundo grau (ax^2 + bx + c):\n");
    printf("a: ");
    scanf("%f", &coef_a);
    printf("b: ");
    scanf("%f", &coef_b);
    printf("c: ");
    scanf("%f", &coef_c);
    calcularRaizes(coef_a, coef_b, coef_c);

    return 0;
}
