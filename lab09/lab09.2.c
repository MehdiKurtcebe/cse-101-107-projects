#include<stdio.h>

int gcdRec(int n,int a,int b){

	if(n==a){
		return n;
	}else if(a==1){
		return n;
	}else{

		if(n%b==0 && a%b==0){
			return b;
		}else{
			return gcdRec(n,a,b-1);
		}
	}
}

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

	printf("%d\n",gcdRec(n,a,a));
}
