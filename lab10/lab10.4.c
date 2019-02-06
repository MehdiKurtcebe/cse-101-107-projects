// NOT FİNİSHED

#include<stdio.h>
#include<stdlib.h>

void mean(int *array, int size){
	int sum = 0;
	int mean;

	for(int i=0; i<size, i++){
		sum += *(array+i);
	}

	mean = sum/size;
}

void stddev(int *array, int size){}


int main(){

	int *array;
	int n;
	int input;

	array = (int*) malloc(n * sizeof(int));

	printf("Please enter size of your array\n");
	scanf("%d", &n);
	printf("Please enter your numbers\n");

	for(int i=0; i<n; i++){
		scanf("%d", array+i);
	}

	printf("Added!\n");


}
