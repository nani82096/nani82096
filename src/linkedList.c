#include "linked.h"

void push(NODE **head, int data){
    NODE *new = (NODE*)malloc(sizeof(NODE));

    new->data = data;
    new->next = (*head);

    (*head) = new;
    
    return;
}

void print_list(NODE *head){
    while(head){
        printf ("%d ", head->data);
        head = head->next;
    }
    printf("\n");
    return;
}
