#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  
  int numero;
  
  for(numero = 0; numero <= 20; numero++){
      
      if(numero % 2)
      {
         printf("%02d numero e impar \n", numero);
      }      
  }
  
  system("PAUSE");	
  return 0;
}
