//  Objetivo:Calcular a quantidade de rolos e quantidade metros avulsos de fios que sao necessarios para o construtor
//  Entrada: Quantidade final de fios
//  Saída: Quantidade de rolos e resto (metros avulsos)

#include<stdio.h>

int main() { 

    
	int fios, metroavulso;
    int rolo; 
    
    printf("Qual a quantidade final de metros de fio obtidos? "); 
    scanf("%d", &fios); 

    metroavulso = fios % 50; 
	rolo = fios / 50;
    
    
    printf("Se tem entao %d rolos e %d metros avulsos.", rolo, metroavulso);

  return 0; 
}
