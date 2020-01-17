#include<stdio.h>

int main(){
	
	int va_1, va_2, vb_1, vb_2;
	double va_3, vb_3;
	float calc_a=0, calc_b=0;
	
	scanf("%d %d %lf",& va_1,& va_2,& va_3);
	scanf("%d %d %lf",& vb_1,& vb_2,& vb_3);

	calc_a = va_2 * va_3;
	calc_b = vb_2 * vb_3;
	
	printf("VALOR A PAGAR: R$ %.2f\n", calc_a+calc_b);
	
	return 0;
}
