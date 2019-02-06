#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct n{
	int number;
	struct node *next;
}node;

void main(){

	int a[4] = {2, 4, 6, 8};

	node *head = (node *) malloc(sizeof(node));
	node *e1 = (node *) malloc(sizeof(node));
	node *e2 = (node *) malloc(sizeof(node));
	node *e3 = (node *) malloc(sizeof(node));

	head -> number = a[0];

	e1 -> number = a[1];
	head -> next = e1;

	e2 -> number = a[2];
	e1 -> next = e2;

	e3 -> number = a[3];
	e2 -> next = e3;

	printf("head: %d - e1: %d - e2: %d - e3: %d\n", head->number, e1->number, e2->number, e3->number);

}
