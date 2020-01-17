#include<stdio.h>


int main(){
	
	int tempo, velocidade;
	float distancia, consumo;
	
	scanf("%d %d", &tempo, &velocidade);
	
	distancia = velocidade * tempo;
	
	consumo = distancia / 12;
	
	printf("%.3f\n", consumo);
	
	return 0;
}
