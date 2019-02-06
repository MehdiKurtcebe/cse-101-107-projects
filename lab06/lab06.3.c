#include<stdio.h>

int main(){

	int max, step, i;

	printf("Hello, please enter your maximum number to create a series:\n");
	scanf("%d",&max);
	printf("\nPlease enter your step number to create a series:\n");
	scanf("%d",&step);
	printf("\n");

	for(i=0; i<=max; i=i+step){
		printf("%d\n",i);
	}

	return 0;
}
