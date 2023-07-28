#include<stdio.h> 
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *start=NULL, *end = NULL;
void enqueue(){
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    int ele;
    printf("Enter element:");
    scanf("%d",&ele);
    newnode->data = ele;
    newnode->next = NULL;
    if (end == NULL){
        end = newnode;
        start = newnode;
        return;
    }
    end->next=newnode;
    end = newnode;
}

void dequeue(){
    if (start == NULL){
        printf("\nQueue Underflow\n");
        return;
    }
    struct node *temp = start;
    printf("\nElement Deleted:%d",temp->data);
    start = start->next;
    if(start == NULL)
        end = NULL;
    free(temp);
    return;
}

void display(){
    if (start == NULL){
        printf("\nQueue Empty");
        return;
    }
    printf("\nQueue:\t");
    struct node *temp = start;
    while(temp!=NULL){
        printf(" %d",temp -> data);
        temp = temp->next;
    }
}
void main(){
    int ch;
    system("cls");
    printf("Enter number of elements: ");
    scanf("%d",&ch);
    for (int i=0; i<ch; i++){
        enqueue();
    }
    display();
    printf("\nAfter removing element:");
    dequeue();
    display();
}