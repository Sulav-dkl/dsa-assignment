#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *prev, *next;
};

void insertAfter(struct Node *node, int val){
    struct Node *newNode=malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->next=node->next;
    newNode->prev=node;
    if(node->next) node->next->prev=newNode;
    node->next=newNode;
}

void deleteNode(struct Node **head, struct Node *node){
    if(node->prev) node->prev->next=node->next;
    else *head=node->next;
    if(node->next) node->next->prev=node->prev;
    free(node);
}

void printList(struct Node *head){
    while(head){ printf("%d ", head->data); head=head->next; }
}

int main(){
    struct Node *head=malloc(sizeof(struct Node));
    head->data=1; head->prev=NULL; head->next=NULL;

    insertAfter(head,2);
    insertAfter(head->next,3);

    printList(head);
    printf("\nDeleting 2\n");

    deleteNode(&head, head->next);
    printList(head);

    return 0;
}