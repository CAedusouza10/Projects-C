#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int maior = 0, menor = 0, numero;
  
  do
  {
      printf("Digite um numero positivo: ");
      scanf("%d", &numero);
      
      if(numero > 0)
      {
          maior = (numero > maior || maior == 0) ? numero : maior;
          menor = (numero < menor || menor == 0) ? numero : menor;
      }
      else 
      {
           printf("Esses valores (zero e negativos) nao entrarao nos calculos \n");         
      }
  
  } while (numero > 0);
  
  
  printf("Maior dos numeros: %d \n", maior);
  printf("Menor dos numeros: %d \n", menor);
  
  system("PAUSE");	
  return 0;
}
