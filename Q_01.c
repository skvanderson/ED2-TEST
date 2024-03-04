/// Questão 01

#include <stdio.h>

int main() {
    int numero;
    printf("\nDigite cinco números no Intervalo de 1 e 30 por favor\n");
    
    for (int c1 = 0; c1 < 5; c1++) {
        scanf("%i", &numero);
            if (numero >= 1 && numero <= 30) {
                for (int j = 0; j < numero; j++) {
                printf("*");
            }
                printf("\n");
            } else {
                printf("Digito informado está fora do intervalo estabelecido. Digite novamente por favor.\n");
                c1--;
        }
    }
    return 0;
}
