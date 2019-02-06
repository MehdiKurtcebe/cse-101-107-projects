#include<stdio.h>

void main(){

	int num1,num2,n,a;

	printf("Please enter your first number to calculate GCD\n");
	scanf("%d",&num1);
	printf("Please enter your second number to calculate GCD\n");
	scanf("%d",&num2);

	if(num1>num2 || num1==num2){
		n=num1;
		a=num2;
	}else{
		n=num2;
		a=num1;
	}

	for(int i=a; i>1; i--){
		if(n%i==0 && a%i==0)
			printf("%d\n",i);
	}

}
