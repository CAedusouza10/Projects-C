#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  
  
  int contador = 0, numero = 1, soma = 0;
  
  while(numero > 0)
  {
      printf("Digite um numero positivo: ");
      scanf("%d", &numero);
      
      if(numero > 0)
      {
         soma = soma + numero;
         contador++;
      }
  }
  
  printf("soma dos numeros: %d \n", soma);
  printf("total de valores lidos: %d \n", contador);
  printf("media dos valores %.2f \n", ((float)soma / contador));
  
  system("PAUSE");	
  return 0;
}
