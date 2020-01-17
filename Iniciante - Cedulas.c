#include<stdio.h>


int main(){
	
	int N=0;
	int cem=0, cinquenta=0, vinte=0, dez=0, cinco=0, dois=0, um=0;

	scanf("%i", & N);	
	
	
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
	printf("%i nota(s) de R$ 100,00\n%i nota(s) de R$ 50,00\n%i nota(s) de R$ 20,00\n%i nota(s) de R$ 10,00\n%i nota(s) de R$ 5,00\n%i nota(s) de R$ 2,00\n%i nota(s) de R$ 1,00\n", cem, cinquenta, vinte, dez, cinco, dois, um);
	
	
	return 0;
}
