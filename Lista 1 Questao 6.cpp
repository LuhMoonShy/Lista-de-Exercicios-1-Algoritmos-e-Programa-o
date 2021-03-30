//  Objetivo: Calcular a média de um aluno
//  Entrada: Nota a e nota b
//  Saída: Média

#include<stdio.h> 

int main() { 

    double a, b, media; 
    
    printf("Qual foi a primeira nota? ");
    scanf("%lf", &a); 
    printf("Qual foi a segunda nota? "); 
    scanf("%lf", &b); 
    
    if (a < 0 or a > 10 or b < 0 or b > 10)
	    printf("Insira um valor de 0 a 10\n"); 
    else {
        media = ((a * 3.5) + (b * 7.5)) / 11; 
	    printf("Media: %.2lf", media); 
	}
    

  return 0; 
}
