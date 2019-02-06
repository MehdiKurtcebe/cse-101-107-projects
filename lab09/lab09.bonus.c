#include<stdio.h>

int foo(int n){

	if(n==0){
		return 0;
	}else if(n==1){
		return 1;
	}

	else{
		return n +foo(n-1);
	}

}

void main(){
	int input;
	printf("Please Enter a Number\n");
	scanf("%d",&input);
	foo(input);
	printf("%d\n",foo(input));
}
