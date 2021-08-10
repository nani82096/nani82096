#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* next;
}NODE;

void insert_at_end(NODE **head, int data);

void push(NODE **head, int data);

void print_list(NODE *head);
