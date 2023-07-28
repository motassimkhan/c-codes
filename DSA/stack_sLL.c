#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *top = NULL;
void push();
void pop();
void display();
void main(){
    int choice;
    printf("Enter the number of elements to push: ");
    scanf("%d",&choice);
    for(int i=0 ;i<choice ;++i){
        push();
    }
    display();
    printf("\nAfter POP action on stack:\n");
    pop();
    display();
}

void push(){
    int element;
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter element to push: ");
    scanf ("%d",&element);
    newnode -> data = element;
    newnode->next = top;
    top = newnode;
    return;
}

void pop(){
    int element;
    if(top == NULL){
        printf("The list is empty\n");
        return;
    }
    struct node *temp = top;
    top = top->next;
    printf("\nElement Popped: %d", temp->data);
    free(temp);
    return;
}

void display(){
    if(top == NULL){
        printf("The list is empty\n");
        return;
    }
    struct node* temp=top;
    printf("\nSTACK:\n");
    while(temp != NULL){
        printf(" %d \n",temp->data);
        temp = temp->next;
    }
}