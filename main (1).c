#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //declaração das variaveis 
  float vetorA[5], vetorB[5];
  int xA, xB, valor0;
  //dados de entrada 
  for (xA=0; xA<5; xA++)
{
printf("digite um numero\n");
scanf("%f", &vetorA[xA]);
}
//verificar posição e calcular
 for (xA=0; xA<5; xA++)
 {
     if(xA%2==0)
     {
                vetorB[xA]=vetorA[xA]*2;
                }
                else
                {
                   vetorB[xA]=vetorA[xA]*3;
                   }
                   } 
                   //exibir o vetorB
                   for(xB=0; xB<5;xB++)
                   {
                             printf("vetorB[%d]=%f\n",xB,vetorB[xB]);
                             }
  system("PAUSE");	
  return 0;
}
