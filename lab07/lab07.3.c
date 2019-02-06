#include<stdio.h>

int main(){

	int just_a_array[5] = {1,3,5,7,9};
	int cumulative_array[5];
	int i,j,k;

	for(j=0;j<=4;j++)
		printf("just_a_array[%d]: %d\n", j, just_a_array[j]);

	for(i=1;i<=4;i++){
		cumulative_array[0] = just_a_array[0];
		cumulative_array[i] = cumulative_array[i-1] + just_a_array[i];
	}

	for(k=0;k<=4;k++)
		printf("cumulative_array[%d]: %d\n", k, cumulative_array[k]);

	return 0;
}
