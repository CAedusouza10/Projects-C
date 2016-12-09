#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    char nome[30];
    char sexo;
    
    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    printf("Digite seu sexo: ");
    scanf("\n%c", &sexo);
    
    if(sexo == 'M' || sexo == 'm'){
         printf("Umo. Sr.");   
    } 
    else if (sexo == 'F' || sexo == 'f'){
         printf("lima. Sra");
    }
  
  printf("\n");
  system("PAUSE");	
  return 0;
}
