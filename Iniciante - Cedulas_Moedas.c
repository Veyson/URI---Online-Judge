#include<stdio.h>
#include<math.h>

int main(){
	
	float N;
	int cem=0, cinquenta=0, vinte=0, dez=0, cinco=0, dois=0, um=0;
	int zcinquenta=0,zvintecinco=0, zdez=0, zcinco=0, zum=0;
	
	scanf("%f", & N);	

	
	while(N >= 100){
		cem++;
		N-=100;
	}
	
	while(N >= 50){
		cinquenta++;
		N-=50;
	}
	while(N >= 20){
		vinte++;
		N-=20;
	}
	while(N >= 10){
		dez++;
		N-=10;
	}
	while(N >= 5){
		cinco++;
		N-=5;
	}
	while(N >= 2){
		dois++;
		N-=2;
	}
	
	while(N >= 1){
		um++;
		N-=1;
	}	

	
	
	while(N >= 0.50){
		zcinquenta++;
		N-=0.50;
	}
	
	while(N >= 0.25){
		zvintecinco++;
		N-=0.25;
	}
	
	while(N >= 0.10){
		zdez++;
		N-=0.10;
	}
	
	while(N >= 0.05){
		zcinco++;
		N-=0.05;
	}
	

	while(ceil(N) >= 0.01){
		zum++;
		N-=0.01;
	}
	
	while(floor(N) >= 0.01){
		zum++;
		N-=0.01;
	}
	printf("NOTAS:\n%i nota(s) de R$ 100.00\n%i nota(s) de R$ 50.00\n%i nota(s) de R$ 20.00\n%i nota(s) de R$ 10.00\n%i nota(s) de R$ 5.00\n%i nota(s) de R$ 2.00\n", cem, cinquenta, vinte, dez, cinco, dois);
	
	printf("MOEDAS:\n%i moeda(s) de R$ 1.00\n%i moeda(s) de R$ 0.50\n%i moeda(s) de R$ 0.25\n%i moeda(s) de R$ 0.10\n%i moeda(s) de R$ 0.05\n%i moeda(s) de R$ 0.01\n", um,zcinquenta,zvintecinco,zdez,zcinco,zum);
	
	
	return 0;
}
