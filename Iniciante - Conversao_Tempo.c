#include<stdio.h>


int main(){
	
	int value, cont_hr=0, cont_min=0, cont_seg=0;
	
	scanf("%i", & value);
	
	int hr = 3600;
	int min = 60;
	int seg = 1;
	
	while(value >= hr){
		value -= hr;
		cont_hr ++;
	}

	while(value > min){
		value -= min;
		cont_min ++;
	}
	
	int i;
	for(i = value; i > 0; i--){
		
		value -= seg;
		cont_seg ++;
	}

	printf("%i:%i:%i\n", cont_hr, cont_min, cont_seg);
	
	
	return 0;
}
