//Objetivo: encontrar a media entre tres numeros quaisquer
//Entrada: numeros a,b e c
//Saida: media entre os valores de a,b e c fornecidos
#include<stdio.h>
int main(){
	
	double a,b,c,media;
	
	printf("Digite o primeiro numero: ");
	scanf("%lf", &a);
	printf("Digite o segundo numero: ");
	scanf("%lf", &b);
	printf("Digite o terceiro numero: ");
	scanf("%lf", &c);
	
	media = (a+b+c) /3;
	
	printf("\nA media dos numeros fornecidos e igual a %.1lf .\n",media);	
	
	return 0;
}
