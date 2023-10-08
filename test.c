#include <stdlib.h>
#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};

void print(struct node *head){
    while(head != NULL){
        printf("%d", head->data);
        head = head->next;
    }
}

int main()
{
    struct node *head, *l1, *l2, *l3;
    head = (struct node*)calloc(1, sizeof(struct node));
    l1 = (struct node*)calloc(1, sizeof(struct node));
    l2 = (struct node*)calloc(1, sizeof(struct node));
    l3 = (struct node*)calloc(1, sizeof(struct node));

    head->next = l1;
    l1->next = l2;
    l2->next = l3;
    l3->next = NULL;

    print(head);

  return 0;
}