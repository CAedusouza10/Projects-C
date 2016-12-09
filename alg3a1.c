#include <stdio.h>
#include <stdlib.h>

void main(){

  int a, b, c, resultado;
  printf("Digite 3 valores inteiros para A, B e C: ");
  scanf("%d %d %d", &a, &b, &c);

  resultado = a + b + c;
  if(resultado >= 100)
    printf("Resultado: %d\n", resultado);

  system("pause");
}
