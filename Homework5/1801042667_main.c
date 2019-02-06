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

void writeData(person *p, int a){
	FILE *mytxt;
	mytxt = fopen("orderedFile.txt", "w");
	int d = numberOfPeople();

	if(a == 1){
		for(int i=0; i<d; i++){
			fprintf(mytxt, "%s %s %s %s\n", (p+i)->ID, (p+i)->name, (p+i)->surname, (p+i)->mail);
		}
	}

	if(a == 2){
		for(int i=0; i<d; i++){
			fprintf(mytxt, "%s %s %s %s\n", (p+i)->name, (p+i)->ID, (p+i)->surname, (p+i)->mail);
		}
	}

	if(a == 3){
		for(int i=0; i<d; i++){
			fprintf(mytxt, "%s %s %s %s\n", (p+i)->surname, (p+i)->ID, (p+i)->name, (p+i)->mail);
		}
	}

	if(a == 4){
		for(int i=0; i<d; i++){
			fprintf(mytxt, "%s %s %s %s\n", (p+i)->mail, (p+i)->ID, (p+i)->name, (p+i)->surname);
		}
	}
	fclose(mytxt);
}

void sort(person *p, int a){
	int d = numberOfPeople();
	char temp[50];
	int first, second;

	if(a==1){
		for(int i=0; i<d-1; i++){
			for(int j=0; j<d-i-1; j++){
				first = atoi((p+j)->ID);
				second = atoi((p+j+1)->ID);
				if(first>second){
					strcpy(temp, (p+j)->ID);
					strcpy((p+j)->ID, (p+j+1)->ID);
					strcpy((p+j+1)->ID, temp);

					strcpy(temp, (p+j)->name);
					strcpy((p+j)->name, (p+j+1)->name);
					strcpy((p+j+1)->name, temp);

					strcpy(temp, (p+j)->surname);
					strcpy((p+j)->surname, (p+j+1)->surname);
					strcpy((p+j+1)->surname, temp);

					strcpy(temp, (p+j)->mail);
					strcpy((p+j)->mail, (p+j+1)->mail);
					strcpy((p+j+1)->mail, temp);
				}
			}
		}
	}

	if(a==2){
		for(int i=0; i<d-1; i++){
			for(int j=0; j<d-i-1; j++){
				if(strcmp((p+j)->name, (p+j+1)->name)>0){
					strcpy(temp, (p+j)->ID);
					strcpy((p+j)->ID, (p+j+1)->ID);
					strcpy((p+j+1)->ID, temp);

					strcpy(temp, (p+j)->name);
					strcpy((p+j)->name, (p+j+1)->name);
					strcpy((p+j+1)->name, temp);

					strcpy(temp, (p+j)->surname);
					strcpy((p+j)->surname, (p+j+1)->surname);
					strcpy((p+j+1)->surname, temp);

					strcpy(temp, (p+j)->mail);
					strcpy((p+j)->mail, (p+j+1)->mail);
					strcpy((p+j+1)->mail, temp);
				}
			}
		}
	}

	if(a==3){
		for(int i=0; i<d-1; i++){
			for(int j=0; j<d-i-1; j++){
				if(strcmp((p+j)->surname, (p+j+1)->surname)>0){
					strcpy(temp, (p+j)->ID);
					strcpy((p+j)->ID, (p+j+1)->ID);
					strcpy((p+j+1)->ID, temp);

					strcpy(temp, (p+j)->name);
					strcpy((p+j)->name, (p+j+1)->name);
					strcpy((p+j+1)->name, temp);

					strcpy(temp, (p+j)->surname);
					strcpy((p+j)->surname, (p+j+1)->surname);
					strcpy((p+j+1)->surname, temp);

					strcpy(temp, (p+j)->mail);
					strcpy((p+j)->mail, (p+j+1)->mail);
					strcpy((p+j+1)->mail, temp);
				}
			}
		}
	}

	if(a==4){
		for(int i=0; i<d-1; i++){
			for(int j=0; j<d-i-1; j++){
				if(strcmp((p+j)->mail, (p+j+1)->mail)>0){
					strcpy(temp, (p+j)->ID);
					strcpy((p+j)->ID, (p+j+1)->ID);
					strcpy((p+j+1)->ID, temp);

					strcpy(temp, (p+j)->name);
					strcpy((p+j)->name, (p+j+1)->name);
					strcpy((p+j+1)->name, temp);

					strcpy(temp, (p+j)->surname);
					strcpy((p+j)->surname, (p+j+1)->surname);
					strcpy((p+j+1)->surname, temp);

					strcpy(temp, (p+j)->mail);
					strcpy((p+j)->mail, (p+j+1)->mail);
					strcpy((p+j+1)->mail, temp);
				}
			}
		}
	}
	
} // I use bubble sort

int main(){

	int d = numberOfPeople();
	int a;
	person *p;
	p = (struct Person*) malloc(d * sizeof(person));

	printf("Hello, please put your text into this program's path and change the name to \"hw4_disordered_people.txt\". If you are sure that, please choose how to sort. 1 = by ID, 2 = by name, 3 = by surname, 4 = by mail\n");
	scanf("%d", &a);

	readData(p);
	sort(p, a);
	writeData(p, a);
	printf("Your text is ordered and sorted, you can find the ordered text as \"orderedFile.txt\"\n");
}
