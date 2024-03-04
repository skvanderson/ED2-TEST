//questão 04

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *decimalToRoman(int num) {

  char *romanNumerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
  int decimalValues[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
  char *romanNumber = malloc(50);
  romanNumber[0] = '\0';
  for (int i = 0; i < 13; i++) {
    if (num >= decimalValues[i]) {
      strcat(romanNumber, romanNumerals[i]);
      num -= decimalValues[i];
    }
  }
  return romanNumber;
}

int main() {
  for (int i = 1; i <= 100; i++) {
    printf("%d - %s\n", i, decimalToRoman(i));
  }

  return 0;
}
