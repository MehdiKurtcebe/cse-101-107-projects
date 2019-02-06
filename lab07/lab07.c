#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

	srand(time(NULL));	//to get different random numbers at each
	int r;
	r = rand();		//to get one random number
	printf("%i\n",r);
	return 0;

}
