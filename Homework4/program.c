#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Person{
	char ID[50];
	char name[50];
	char surname[50];
	char mail[50];
}person;

int numberOfPeople(){
	FILE *txt;
	int value;
	int number = 0;
	if(txt = fopen("hw4_disordered_people.txt", "r")){
		while(!feof(txt)){
			value = getc(txt);
			if(value == 10){
				number += 1;
			} // I find the number of people using number of line feeds. Decimal value of line feed is 10.
		}
		fseek(txt, 0, SEEK_SET);
		fclose(txt);
	}else{
		printf("The file cannot found\n");
	}
	return number;
} // This function finds the number of people in the text

void assignData(char temp[], int c, person *p){
	char a1[50], a2[50], a3[50], a4[50];
	sscanf(temp, "%s %s %s %s", a1, a2, a3, a4); // I separate words
	int lena1 = strlen(a1);
	int lena2 = strlen(a2);
	int lena3 = strlen(a3);
	int lena4 = strlen(a4);


	
	for(int i=0; i<lena1; i++){
		if(a1[i] == '@'){
			strcpy((p+(c-1))->mail, a1);
		}
	}

	for(int i=0; i<lena1; i++){
		if((int) a1[i]>47 & (int) a1[i]<58){
			strcpy((p+(c-1))->ID, a1);
		}
	}

	if((int) a1[0]>64 & (int) a1[0]<91 & (int) a1[1]>96 & (int) a1[1]<123){
		strcpy((p+(c-1))->name, a1);
	}

	if((int) a1[0]>64 & (int) a1[0]<91 & (int) a1[1]>64 & (int) a1[1]<91){
		strcpy((p+(c-1))->surname, a1);
	}





	for(int i=0; i<lena2; i++){
		if(a2[i] == '@'){
			strcpy((p+(c-1))->mail, a2);
		}
	}

	for(int i=0; i<lena2; i++){
		if((int) a2[i]>47 & (int) a2[i]<58){
			strcpy((p+(c-1))->ID, a2);
		}
	}

	if((int) a2[0]>64 & (int) a2[0]<91 & (int) a2[1]>96 & (int) a2[1]<123){
		strcpy((p+(c-1))->name, a2);
	}

	if((int) a2[0]>64 & (int) a2[0]<91 & (int) a2[1]>64 & (int) a2[1]<91){
		strcpy((p+(c-1))->surname, a2);
	}





	for(int i=0; i<lena3; i++){
		if(a3[i] == '@'){
			strcpy((p+(c-1))->mail, a3);
		}
	}

	for(int i=0; i<lena3; i++){
		if((int) a3[i]>47 & (int) a3[i]<58){
			strcpy((p+(c-1))->ID, a3);
		}
	}

	if((int) a3[0]>64 & (int) a3[0]<91 & (int) a3[1]>96 & (int) a3[1]<123){
		strcpy((p+(c-1))->name, a3);
	}

	if((int) a3[0]>64 & (int) a3[0]<91 & (int) a3[1]>64 & (int) a3[1]<91){
		strcpy((p+(c-1))->surname, a3);
	}





	for(int i=0; i<lena4; i++){
		if(a4[i] == '@'){
			strcpy((p+(c-1))->mail, a4);
		}
	}

	for(int i=0; i<lena4; i++){
		if((int) a4[i]>47 & (int) a4[i]<58){
			strcpy((p+(c-1))->ID, a4);
		}
	}

	if((int) a4[0]>64 & (int) a4[0]<91 & (int) a4[1]>96 & (int) a4[1]<123){
		strcpy((p+(c-1))->name, a4);
	}

	if((int) a4[0]>64 & (int) a4[0]<91 & (int) a4[1]>64 & (int) a4[1]<91){
		strcpy((p+(c-1))->surname, a4);
	}
} // This function separates words in rows and assigns this words to structures.

void readData(person *p){
	FILE *txt;
	int c = 1;
	char temp[200];
	if(txt = fopen("hw4_disordered_people.txt", "r")){
		while(!feof(txt)){
				fgets(temp, 200, txt);
				assignData(temp, c, p);
				c += 1;
		} // I separate the rows and I call a function to separate and assign words
		fclose(txt);
	}else{
		printf("Your text cannot found\n");
	}
}

void writeData(person *p){
	FILE *mytxt;
	mytxt = fopen("hw4_ordered_people.txt", "w");
	int d = numberOfPeople();

	for(int i=0; i<d; i++){
		fprintf(mytxt, "%s %s %s %s\n", (p+i)->ID, (p+i)->name, (p+i)->surname, (p+i)->mail);
	}
	fclose(mytxt);
}

int main(){

	int d = numberOfPeople();
	person *p;
	p = (struct Person*) malloc(d * sizeof(person));

	int b;
	printf("Hello, please put your text into this program's path and change the name to \"hw4_disordered_people.txt\". If you are sure that, press any key and then press enter.\n");
	scanf("%d", &b);

	readData(p);
	writeData(p);

	printf("Your text is ordered, you can find the ordered text as \"hw4_ordered_people.txt\"\n");
}
