#include<stdio.h>

void square(){

	int length, i, j;

	printf("Please Enter Length of the Square\n");
	scanf("%d", &length);

	for(i=1;i<=length;i++){
		for(j=1;j<=length;j++){
			printf("x");
		}
		printf("\n");
	}

}


int main(){

	square();
	return 0;

}
