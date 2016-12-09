#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/* 1) Escreva um programa que multiplique dos valores informados pelo usuário.*/
	float x, y;
	printf("Digite o valor de X: ");
	scanf("%f", &x);

	printf("Digite o valor de Y: ");
	scanf("%f", &y);
		
	printf("%.2f", (x*y));
	
	/* 2) Escreva um programa que calcule a quantidade de amaciante */
	float peso;
	printf("\nDigite o peso da roupa: ");
	scanf("%f", &peso);
	
	float qtd_amaciante = (peso / 6) * 50;
	printf("\nQuantidade de amaciante: %0.2fml", qtd_amaciante);
	
	/* 3) Escreva um programa que calcule o prato */
	float qtd_prato;
	printf("\nDigite o quilograma: ");
	scanf("%f", &qtd_prato);
	
	printf("valor do prato R$%.2f ", ((qtd_prato - 100) / 100) * 45);
	
	/* 4) Escreva */
	float altura;
	printf("\nDigite a sua altura: ");
	scanf("%f", &altura);
	
	float p_peso;
	printf("Digite o seu peso: ");
	scanf("%f", &p_peso);
	
	printf("Seu IMC eh: %.2f", p_peso /(altura * altura));
	
	
	/* 5) */
	float tempo, ml;
	
	printf("\nDigite a quantidade em ml: ");
	scanf("%f", &ml);
	
	tempo = (ml * 0.3);
	printf("Tempo de aquecimento: %.0fs", tempo);
	
	/* 6) */
	int i;
	printf("\nDigite a ate quanto: ");
	scanf("%d", &i);
	
	while(i > 0){
		printf("contagem regressiva: %d \n", i--);
	}
	
}
