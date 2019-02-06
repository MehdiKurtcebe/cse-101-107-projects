#include<stdio.h>

int main()

{
	int x, res;

	printf("Hello. Please enter a number. I'll put your number to f(x)= 5*x*x + 6*x -3\n");
	scanf("%d", &x);

	res = 5*x*x + 6*x - 3;

	printf("\nResult : %d\n", res);

	return 0;
}
