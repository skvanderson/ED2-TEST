#include <stdio.h>

int Primo(int n, int divisor) {
    if (divisor == 1) {
        return 1;
    }
    
    if (n % divisor == 0) {
        return 0;
    }
    return Primo(n, divisor - 1);
}

int main() {
    int num;
    printf("Digite um número inteiro positivo\n");
    scanf("%i", &num);
    
    if (num <= 1) {
        printf("%i não é um número primo.\n", num);
    } else {
        int result = Primo(num, num - 1);
        if (result) {
            printf("%i é um número primo.\n", num);
        } else {
            printf("%i não é um número primo.\n", num);
        }
    }
    
    return 0;
}
