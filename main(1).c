#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int tamanho=0, i=0;
    
    float vetor[tamanho], soma=0;
    //solicitar otamanho do vetor
    printf("determine  o tamanho do vetor\n");
    scanf("%d", &tamanho);
    //construção do vetor 
    for (i=0; i<tamanho; i++)
    {
        printf("digite um numero\n");
    scanf("%f", &vetor[i]);
     soma=soma+vetor[i];
     }
     printf("media=%f\n", soma/tamanho);
     
  
  system("PAUSE");	
  return 0;
}
