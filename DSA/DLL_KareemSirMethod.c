#include <stdio.h>
#include <stdlib.h>

struct node{
    int data; 
    struct node* next;
    struct node *prev;
};
struct node *start = NULL;
struct node *end = NULL;

struct node* newnode(){
    struct node* new = (struct node*) malloc(sizeof(struct node));
    return new; 
}

void display(){
    struct node *temp = start;
    while(temp != NULL)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }
}

void insert(int ele)
{
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = ele;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (start == NULL)
    {
        start = newnode;
        end = newnode;
    }
    else
    {
        end->next = newnode;
        newnode->prev = end;
        end = newnode;
    }
}

int main(){
    int ele;
    insert(209);
    insert(-138);
    insert(782);

    printf("Enter an element: ");
    scanf("%d", &ele);

    printf("\nList: \n");
    display();

    insert(ele);

    printf("\nAfter insertion: \n");
    display();

    return 0;
}