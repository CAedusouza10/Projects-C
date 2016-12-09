#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 
    
    int numero[5]; //declara o vetor
    int x, soma=0;
    
    for(x=0; x<5; x++)
    {
  printf("digite o numero %d",x+1);
  scanf("%d",&numero[x]);
  soma=soma+numero[x];
}
 printf(" soma total=%d\n", soma); 
 //exibir os valores do vetor 
 x=0;
 while(x<5)
 {
           printf("numero %d=%d\n", x, numero [x]);
           x++; //incremento
           }

  system("PAUSE");	
  return 0;
}
