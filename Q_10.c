//Questão 10

#include <stdio.h>
#include <stdlib.h>

int calcularA(int m, int n) {
    while (m > 0) {
        if (n == 0) {
            n = 1;
        } else {
            n = calcularA(m, n - 1);
        }
        m--;
    }
    return n + 1;
}
void apresentarResultados(int limite_x, int limite_y) {
    for (int x = 0; x < limite_x; x++) {
        for (int y = 0; y < limite_y; y++) {
            printf("A(%i, %i) = %i\n", x, y, calcularA(x, y));
        }
    }
}
int main() {
    int limite_x, limite_y;

    printf("Digite o número referente ao eixo X >>\n");
    scanf("%i", &limite_x);

    printf("Obrigado! Agora digite o número referente ao Eixo Y  para traçamos o limite entre eles >> \n");
    scanf("%i", &limite_y);

    apresentarResultados(limite_x, limite_y);

    return 0;
}

