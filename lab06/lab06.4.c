#include<stdio.h>

int main() {

	int array[20];

	array[0]=0;
	array[1]=1;
	
	printf("%d\n", array[0]);
	printf("%d\n", array[1]);

	for(int i=2; i<=20; i++){
		array[i] = array[i-1] + array[i-2];
		printf("%d\n", array[i]);
	}

	return 0;
}

//Fibonacci is done, done by sanane
