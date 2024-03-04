#include <stdio.h>
#include <stdlib.h>


int produto(int aux, int aux1) {
  if (aux1 == 0) {
    return 0;
} else if (aux1 > 0) {
        return aux + produto(aux, aux1 - 1);
} else {
         return -produto(aux, -aux1);
    }
}

int main() {
    int aux, aux1;
    printf("Digite um número\n");
    scanf("%i", &aux);
    printf("Digite o outro número por favor\n");
    scanf("%i", &aux1);
    printf("O produto de %d e %d é: %d\n", aux, aux1, produto(aux, aux1));

    return 0;
}

