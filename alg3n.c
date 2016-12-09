#include <stdio.h>
#include <stdlib.h>

void main() {

  short a, b, diferenca;
  printf("Digite um valor para A (espace) B: ");
  scanf("%hd %hd", &a, &b);

  a = a < 0 ? a * -1 : a;
  b = b < 0 ? b * -1 : b;

  diferenca = a - b;
  diferenca = diferenca < 0 ? diferenca * -1 : diferenca;

  printf("Diferenca: %d\n", diferenca);
  
  system("pause");
}
