#include<stdio.h>

int main(){

	int x,y,temp;

	printf("Hello, please enter your x number\n");
	scanf("%d",&x);
	printf("Hello, please enter your y number\n");
	scanf("%d",&y);

	temp = x;
	x = y;
	y = temp;

	x = 2*x;
	y = 2*y;

	printf("\nSwapped Variables:\n");
	printf("\nx: %d",x);
	printf("\ny: %d\n",y);

	return 0;
}
