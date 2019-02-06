/* THIS PROGRAM SORTS ARRAY DEMONSTRATION PURPOSES */
/* GTU RULEZ */
/* I took 90/100 from this homework*/
#include<stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0


int PrintSelection(int selection){
 printf("Selected Menu item is:");
 printf("%d\n",selection);
 return 1;
 
}

int DisplayMenu(){
 int selection;
 printf("\e[2J"); // clears screen
 
 printf("%s","\e[5;31;47mWELCOME TO ADDING PROGRAM\e[0m\n");
 printf("%s","(1) Add two numbers\n");
 printf("%s","(2) Sort an array\n");
 printf("%s","(3) Subtract two numbers\n");
 printf("%s","(4) Divide numbers\n");
 printf("%s","(5) Summarize numbers with words\n");
 printf("%s","(6) Exponent two numbers x to the y\n");
 printf("%s","(0) quit\n");
 printf("Selection:");	
 scanf("%d",&selection);
 PrintSelection(selection);
 return selection;
}

int main(){
int number1, number2, sum, res;
char wanttoexit = FALSE;
char c;
int choice;
int i,j;
int myArray[100];
int max;
int pivot;
int temp;
int number;
int exp, base;
int digit, digitnum;
float num, denom, division;

// main loop
while(wanttoexit == FALSE){

	// display menu and get result	
	choice = DisplayMenu();
	
	
	if(choice == 1){
		printf("%s","PLEASE  ENTER FIRST NUMBER\n");
		scanf("%d",&number1);
		printf("%s","PLEASE  ENTER SECOND NUMBER\n");
		scanf("%d",&number2);
		sum = number1 + number2;
		printf("The result is: ");
		printf("%d\n",sum);
		c=getchar();
		c=getchar();
	}
	if(choice == 2){
		printf("%s","Enter numbers for array and 0 for end\n");
		for(i=0;i<100;i++){
			scanf("%d",&temp);
			if(temp == 0) break;
			myArray[i] = temp;
			max = i ;
		}
		printf("Numbers are entered.. \n");
		printf("Now sorting.. ");
	    for(i=0;i<=max;i++){
	       for(j=0;j<max; j++){
	           if(myArray[j] > myArray[j+1]){
	           		temp = myArray[j];
	           		myArray[j]= myArray[j+1];
	           		myArray[j+1]=temp;
	           }
		    }
		    
		}
		printf("finished..\n ");
	    for(i=0;i<=max;i++){
	      printf("%d  ",myArray[i]);
	    }
	      printf("are the numbers.\n");
	        
		    
		c=getchar();
		c=getchar();
	}

	if(choice == 3){

		printf("PLEASE ENTER FİRST NUMBER\n");
		scanf("%d",&number1);
		printf("PLEASE ENTER SECOND NUMBER\n");
		scanf("%d",&number2);

		res = number1 - number2;

		printf("The result is: ");
		printf("%d\n",res);
		c=getchar();
		c=getchar();
	}

	if(choice == 4){

		printf("PLEASE ENTER NUMERATOR\n");
		scanf("%f",&num);
		printf("PLEASE ENTER DENOMINATOR\n");
		scanf("%f",&denom);

		division = num / denom;

		printf("The result is: ");
		printf("%f\n",division);
		c=getchar();
		c=getchar();
	}

	if(choice == 5){

		printf("PLEASE ENTER THE NUMBER\n");
		scanf("%d", &number);
		if(number<0){
			printf("Wrong number! Please enter a positive number\n");
			break;
		}
		printf("The result is : ");
		printf("%d = ",number);
		digitnum = 1;
		temp = number;

		while(temp>=10){
			temp = temp / 10;
			digitnum = digitnum * 10;
		} // finding digit number
			
		for(i=digitnum; i>=10; i=i/10){
				digit = number / i;
				printf("%dx%d + ", digit, i);
				number = number % i;
		}
		printf("%d", number % 10);
		c=getchar();
		c=getchar();
	}

	if(choice == 6){

		printf("PLEASE ENTER THE BASE NUMBER\n");
		scanf("%d", &base);
		printf("PLEASE ENTER THE EXPONENT NUMBER\n");
		scanf("%d", &exp);

		if(exp == 1){
			res = base;
		}else if(exp == 0){
			res = 1;
		}else if(exp<0){
			res = 0; // exceptions
		}else{
			res = base * base;
			for(i=1; i<exp-1; i++){
			res = res * base;
			} // taking exponent
		}

		printf("The result is: ");
		printf("%d\n", res);

		c=getchar();
		c=getchar();

	}

	if(choice == 0){
		wanttoexit = TRUE;
		printf("exiting...");
	}
} // end of while

}
