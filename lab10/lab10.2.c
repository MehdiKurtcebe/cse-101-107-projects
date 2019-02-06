#include<stdio.h>
#include<stdlib.h>

int main(){

	int *array;
	int n = 15;
	int input;

	array = (int*) malloc(n * sizeof(int));

	printf("Please enter your numbers\n");

	for(int i=0; i<n; i++){
		scanf("%d", array+i);
	}

	printf("Added!");	

}
