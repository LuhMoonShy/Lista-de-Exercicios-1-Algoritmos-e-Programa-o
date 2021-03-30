//Objetivo: Transformar as horas informadas em minutos e segundos
//Entrada: Horas
//Saida: Minutos,segundos
#include<stdio.h>
int main(){
	int	h,m,s;

	printf("Quantas horas sao? \n");
	scanf("%d",&h);

	m = h * 60;
	s = h * 3600;

	printf("%d horas corresponde a %d em minutos e %d em segundos.\n",h,m,s);
	return 0;
}
