#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int r;

int random_number(){
	r = rand() % 100 ;
	return r;
}


int main(){
	srand(time(NULL));
	int i,j;
	int random_array[15];
	int square_array[15];

	for(i=0;i<=15;i++){
		random_array[i] = random_number();
		printf("random_array[%d]: %d\n",i,random_array[i]);
	}

	for(j=0;j<=15;j++){
		square_array[j] = random_array[j]*random_array[j];
		printf("square_array[%d]: %d\n",j,square_array[j]);
	}

}
