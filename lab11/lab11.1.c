#include<stdio.h>
#include<stdlib.h>

typedef struct Complex {
	float real;
	float imag;
}complex;

complex compAdd(complex n1, complex n2){
	complex *n3;
	n3 = (complex*) malloc(1 * sizeof(complex));
	n3->real = n1.real + n2.real;
	n3->imag = n1.imag + n2.imag;
	return *n3;
}

int main(){
	complex n1;
	complex n2;
	complex n3;
	n1.real = 2.5;
	n1.imag = 4;
	n2.real = 3;
	n2.imag = 1.8;

	n3 = compAdd(n1, n2);

	printf("n1 = %f + %fi\n", n1.real, n1.imag);
	printf("n2 = %f + %fi\n", n2.real, n2.imag);
	printf("n3 = %f + %fi\n", n3.real, n3.imag);
	return 0;
}
