#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 float notas [8][4];
 float media[8];
 int x,y,z; 
 float soma=0;
 
 for(x=0;x<8;x++)
 {
 media[x]=0;
 
 for(y=0;y<4;y++)
 {
 
 printf("digite a notas %d do aluno %d\n" ,y+1,x+1);
 scanf("%f",  &notas[x][y]);
 media[x]+=notas [x][y];
}
printf("media=%f", (media[x]/4));
}
 
 
                 
  system("PAUSE");	
  return 0;
}
