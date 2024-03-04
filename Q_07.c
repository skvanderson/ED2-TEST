//questão07

#include <stdio.h>

int isPrime(int numero, int v) {
    return v == 1 ? 1 : (numero % v == 0 ? 0 : isPrime(numero, v - 1));
}

int main() {
    
    int num;
    printf("Digite um número ");
    scanf("%i", &num);

    if (num <= 1) {
        printf("%i não é primo.\n",num);
    } else {
        if (isPrime(num, num / 2)) {
            printf("%i é primo.\n",num);
        } else {
            printf("%i não é primo.\n",num);
        }
    }

    return 0;
}
