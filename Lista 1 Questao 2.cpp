//  Objetivo:Calcular a área de uma circunferencia
//  Entrada:Raio
//  Saída:Área
#include<stdio.h> 
#include<math.h>

int main() { 

    double raio, area; 
    
    printf("Qual o raio da circunferencia? "); 
    scanf("%lf", &raio); 
    
    area = 3.14 * pow(raio,2); 
    
    printf("O valor da area da circunferencia e: %.3lf", area);

  return 0; 
}
