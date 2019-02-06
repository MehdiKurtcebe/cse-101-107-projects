#include<stdio.h>

void triangle(){

	int line, i, j;

	printf("Please Enter Line Number\n");
	scanf("%d", &line);

	for(i=1; i<=line; i++){
		for(j=1; j<=i; j++){
			printf("x");
		}
		printf("\n");
	}
		
}

int main(){
	triangle();
}
