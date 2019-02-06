#include<stdio.h>
#include<stdlib.h>

int main(){

	int *ptr;
	int n=1;
	int input;

	ptr = (int*) malloc(n * sizeof(int));

	while(input != -1){
		scanf("%d", &input);
		*(ptr + (n-1)) = input;
		n += 1;
		ptr = (int*) realloc(ptr,n* sizeof(int));

	}

}
