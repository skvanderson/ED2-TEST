#include <stdio.h>

int main() {
    int n, a, b, c;

    printf("Informe Por favor o valor máximo para os catetos e hipotenusa\n");
    scanf("%i", &n);
    printf("Triplos pitagóricos para cateto1, cateto2 e hipotenusa até %i:\n",n);
    printf("Conferir o resultado a abaixo\n");

    for (a = 1; a <= n; a++) {
        for (b = a; b <= n; b++) {
            c = a * a + b * b;
            int temp = 1;
            while (temp * temp < c) {
                temp++;
            }
            if (temp <= n && temp * temp == c) {
                printf("(%i, %i, %i)\n", a, b, temp);
                printf("\n");
            }
        }
    }
    printf("\nFim\n");

    return 0;
}

