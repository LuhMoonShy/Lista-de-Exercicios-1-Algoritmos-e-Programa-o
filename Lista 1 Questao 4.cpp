//  Objetivo:Forneça o resto e o quociente da divisao entre dois numeros
//  Entrada: Número x e número y
//  Saída: Resto e o quociente da divisão

#include<stdio.h> 
#include<math.h> 

int main() { 

    int resto, quociente, x, y; 
    
    printf("Informe o primeiro numero: "); 
    scanf("%d", &x); 
    printf("Informe o segundo numero: "); 
    scanf("%d", &y); 
    
    resto = x % y; 
    quociente = x / y; 
    
    printf("%d / %.d equivale a %d \ntendo resto equivalente a %d", x, y, quociente, resto);

  return 0; 
}
