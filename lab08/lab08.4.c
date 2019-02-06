#include<stdio.h>

void sort(){

	int size, tmp;

	printf("Please Enter The Size of Your Array To Sort\n");
	scanf("%d", &size);
	int array[size];
	printf("Please Enter Your Numbers\n");

	for(int i=0; i<size; i++){
		scanf("%d", &array[i]);
	}

	for(int i=0; i<size-1; i++){
		for(int j=0; j<size-i-1; j++){
			if(array[j]>array[j+1]){
				tmp = array[j];
				array[j] = array[j+1];
				array[j+1] = tmp;
			}
		}
	}

	for(int i=0; i<size; i++){
		printf("%d ", array[i]);
	}

	printf("\n");

}

int main(){
	sort();
}
