//Objwtivo: Calcular o salario de um funcionaria a partir das informações dadas
//Entrada:Nome,sexo,matricula,horas de trabalho,valor por hora
//Processamento:Calculo entre o valor por hora e o nuero de horas trabalhadas
//Saida:Salario
#include<stdio.h>
int main(){
	
	char nome[50],sexo[1];
	
	int matricula,horas;
	
	double valor,salario;
	
	printf("Qual o nome do funcionario?\n");
	scanf("%s",&nome);
	printf("Qual o sexo do funcionário (F ou M)?\n");
	scanf("%s",&sexo);
	printf("Qual a matricula do funcionario?\n");
	scanf("%d",&matricula);
	printf("Qual o numero de horas trabalhadas por esse funcionario?\n");
	scanf("%d",&horas);
	printf("Qual o valor que esse funcionario recebe por hora?\n");
	scanf("%lf",&valor);
	
	salario=horas*valor;
	
	printf("\nFuncionario: %s\nSexo: %s",nome,sexo);
	printf("\nMatricula: %d",matricula);
	printf("\nHoras trabalhadas: %d\nValor por hora: R$%.2lf",horas,valor);
	printf("\nSalario: R$%.2lf",salario);

	return 0;
}
