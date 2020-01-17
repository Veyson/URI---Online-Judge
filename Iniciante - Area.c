#include<stdio.h>
#include<math.h>

int main(){
	
	double A, B, C;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	printf("TRIANGULO: %.3f\n", (A*C)/2 );//(base*altura)/2
	printf("CIRCULO: %.3f\n", 3.14159*pow(C,2));//pi*raio^2
	printf("TRAPEZIO: %.3f\n", ((A+B)*C)/2 );//((basemaior+basemenor)*altura)/2
	printf("QUADRADO: %.3f\n", pow(B,2));//base^2
	printf("RETANGULO: %.3f\n", A*B);//base*altura
	
	return 0;
}
