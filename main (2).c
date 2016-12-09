#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int hora;
    printf("informe a hora");
    scanf("%d",&hora);

if(hora>0 && hora<12) 
   printf("bom dia \n");
   else if(hora>=12 && hora <18)
   printf("boa tarde \n");
   else
   printf("boa noite \n");


  
  system("PAUSE");	
  return 0;
}
