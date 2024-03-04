//questão 08

#include <stdio.h>

int inversao(int numero, int reverso) {
    if (numero == 0) {
        return reverso;
    }
    return inversao(numero / 10, reverso * 10 + numero % 10);
}
int numerosinvertidos(int numero) {
    return inversao(numero, 0);
}

int main() {
    int numero;
    printf("Informe os Valores\n");
    scanf("%i", &numero);
    int reverso = numerosinvertidos(numero);
    printf("Os número invertidos agora são XD %i\n", reverso);
    return 0;
}

