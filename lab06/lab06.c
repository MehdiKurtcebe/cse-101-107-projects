#include<stdio.h>

int main(){

	int num1, num2, num3, temp;

	printf("Hello, please enter your first number to sort\n");
	scanf("%d",&num1);
	printf("\nPlease enter your second number to sort\n");
	scanf("%d",&num2);
	printf("\nPlease enter your third number to sort\n");
	scanf("%d",&num3);

	if(num1>num2){
	temp = num1;
	num1 = num2;
	num2 = temp;
	}

	if(num2>num3){
	temp = num2;
	num2 = num3;
	num3 = temp;
	}

	if(num1>num2){
	temp = num1;
	num1 = num2;
	num2 = temp;
	}

	printf("\nNumber from small to large: %d %d %d\n",num1,num2,num3);

	
}
