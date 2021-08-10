#include "linked.h"

int main(void){
    NODE *head = NULL;

    push(&head, 1);
    push(&head, 2);
    push(&head, 10);

    print_list(head);

    return 0;
}
