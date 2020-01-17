#include<stdio.h>


int main(){
	
	int number_func, hr_tra; 
	double value_hr;
	float  salario;
	
	scanf("%d %d %lf",&number_func, &hr_tra, &value_hr);
	
	salario = hr_tra*value_hr;
	
	printf("NUMBER = %d\nSALARY = U$ %.2f\n",number_func, salario);
	
	return 0;
}
