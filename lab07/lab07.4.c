#include<stdio.h>

int main(){

	int any_array[7] = {7,3,9,4,5,2,6};
	int i;
	int a = 0;

	for(i=0;i<=5;i++){

		if(any_array[i]<any_array[i+1]){
			a = a+1;
		}
	}

	printf("%d\n",a);

}
