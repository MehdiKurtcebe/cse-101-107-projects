#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Books{
	char name[50];
	char author[9];
	int isbn;
	int pubyear;
	int pagenum;
}book;

void totpagenum(book b1, book b2, book b3, book b4, book b5){
	int total;
	total = b1.pagenum + b2.pagenum + b3.pagenum + b4.pagenum + b5.pagenum;
	printf("Total Page Number: %d\n", total);
}

int main(){
	book library[5];

  	strcpy( library[0].name, "Book 1");
  	strcpy( library[0].author, "Author 1");
	library[0].isbn = 9991;
	library[0].pubyear = 2001;
	library[0].pagenum = 100;

  	strcpy( library[1].name, "Book 2");
  	strcpy( library[1].author, "Author 2");
	library[1].isbn = 9992;
	library[1].pubyear = 2002;
	library[1].pagenum = 200;

  	strcpy( library[2].name, "Book 3");
  	strcpy( library[2].author, "Author 3");
	library[2].isbn = 9993;
	library[2].pubyear = 2003;
	library[2].pagenum = 300;

  	strcpy( library[3].name, "Book 4");
  	strcpy( library[3].author, "Author 4");
	library[3].isbn = 9994;
	library[3].pubyear = 2004;
	library[3].pagenum = 400;

  	strcpy( library[4].name, "Book 5");
  	strcpy( library[4].author, "Author 5");
	library[4].isbn = 9995;
	library[4].pubyear = 2005;
	library[4].pagenum = 500;

	totpagenum(library[0], library[1], library[2], library[3], library[4]);

	char a[9];
	strcpy(a, "Author 4");
	for(int i=0; i<5; i++){
		if(a == library[i].author){
			printf("The Book Is: %s\n", library[i].name);
		}else{
			printf("There is no this kind of book\n");
		}
	} // These are don't working
}
