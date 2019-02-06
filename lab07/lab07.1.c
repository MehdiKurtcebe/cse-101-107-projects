#include<stdio.h>


int main(){

	int my_array[333];
	my_array[0] = 0;

	for(int i=0;i<=333;i++){
	
		my_array[i+1] = my_array[i] + 3;
		printf("my_array[%d]: %d\n",i,my_array[i]);
	
	}
	
	return 0;
}
