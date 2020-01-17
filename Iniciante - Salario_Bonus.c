#include<stdio.h>

int main(){
	
	char nome[100];
	double salario_fixo, total_vendas, total; 
	
	scanf("%s", nome);
	scanf("%lf %lf", &salario_fixo, &total_vendas);
	
	total = salario_fixo + (total_vendas * 15/100);
	
	printf("TOTAL = R$ %.2f\n", total);
	
	return 0;
}
