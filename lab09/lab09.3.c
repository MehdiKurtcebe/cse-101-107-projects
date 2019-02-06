#include<stdio.h>

int fac(int n){

	if(n==0 || n==1){
		return 1;
	}else{
		return n*fac(n-1);
	}
}


int expo(int n, int a){

	if(a==0){
		return 1;
	}else if(a==1){
		return n;
	}else{
		a = a-1;
		return n*expo(n,a);
	}
}


void main(){
	int y,n,a;

	printf("Please enter number n to calculating f(x)= n^a + n! +7\n");
	scanf("%d",&n);
	printf("Please enter number a to calculating f(x)= n^a + n! +7\n");
	scanf("%d",&a);

	y = expo(n,a) + fac(n) + 7;

	printf("%d\n",y);
}
