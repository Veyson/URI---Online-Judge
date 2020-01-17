#include<stdio.h>


int main(){
	
	int a, b, c, i;
	
	scanf("%d %d %d", &a, &b, &c);
	
	for(i=0; i<3;i++){
		if(a>b && a>c){
			printf("%d eh o maior\n", a);
			return 0;
		}else if(b>a && b>c){
			printf("%d eh o maior\n", b);
			return 0;
		}else if(c>a && c>b){
			printf("%d eh o maior\n", c);
			return 0;
		}
	}
}
