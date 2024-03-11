// questão 04

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *decimal_para_romano(int num) {
char *romanos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
  int valor[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
  char *numero_romano = malloc(50);
    numero_romano[0] = '\0';

    for (int i = 0; i < 13; i++) {
        while (num >= valor[i]) {
            strcat(numero_romano, romanos[i]);
            num -= valor[i];
        }
    }
    return numero_romano;
}

int main() {
    for (int i = 1; i <= 100; i++) {
        printf("%d - %s\n", i, decimal_para_romano(i));
    }
    return 0;
}
