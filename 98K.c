#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int numero;
  printf("Digite um numero: ");
  scanf("%d", &numero);
  
  if(numero >= 1 && numero <= 9){
      printf("O valor esta na faixa permitida");
  }
  else{
      printf("O valor nao esta na faixa permitida"); 
  } 
  
  printf("\n");
  system("PAUSE");	
  return 0;
}
