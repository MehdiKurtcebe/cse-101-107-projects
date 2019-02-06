#include<stdio.h>

void rectangle(){

	int Col, Row, i, j, k;

	printf("Please Enter Row Number\n");
	scanf("%d", &Row);
	printf("Please Enter Column Number\n");
	scanf("%d", &Col);

	for(i=1; i<=Row; i++){
		if(i==1 || i==Row){
			for(j=1; j<=Col; j++){
				printf("0");
			}
		}else{
			for(k=1; k<=Col; k++){
				if(k==1 || k==Col)
					printf("0");
				else{
					printf("1");
				}			
			}
		}
		printf("\n");

	}
}


int main(){
	rectangle();
}
