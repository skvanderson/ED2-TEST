//questão6

#include <stdio.h>

int mdc(int a, int b) {
    return b == 0 ? a : mdc(b, a % b);
}

int main() {
    int numero1, numero2;
    printf("Informe um número Inteiro\n");
    scanf("%i",&numero1);
    printf("Informe outro número inteiron\n");
    scanf("%i",&numero2);
    printf("O Máximo Divisor Comum de %i e %i é: %i\n", numero1, numero2, mdc(numero1, numero2));
    return 0;
}

