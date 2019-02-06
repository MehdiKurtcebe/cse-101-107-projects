#include<stdio.h>

int main()

{
	int num1, num2, res;

	printf("Enter first number please:\n");
	scanf("%d", &num1);
	printf("\nEnter second number please:\n");
	scanf("%d", &num2);

	res = num1 + num2;
	printf("\nResult : %d\n", res);

	return 0;
}
