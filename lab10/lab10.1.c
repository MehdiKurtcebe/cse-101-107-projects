#include<stdio.h>

int sum(int a, int b){
	a += b;
	return a;
}

void sum1(int *a, int *b){
	*a += *b;
}

int main(){

	int a,b,res,x,y;
	a=5;
	b=4;
	x=5;
	y=4;

	res = sum(a,b);
	sum1(&x,&y);

	printf("a=%d\nb=%d\nx=%d\ny=%d\n",a,b,x,y);
	printf("a+b=%d\n",res);
	printf("x+y=%d\n",x);

}
