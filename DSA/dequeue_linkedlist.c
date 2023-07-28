#include <stdio.h>
struct node {
    int data;
    struct node* next;
    struct node* prev;
};

struct node* start = NULL;
struct node* end = NULL;

struct node* newnode(){
    struct node* newnode = (struct node) malloc(sizeof(struct node));
    return newnode;
}
void insert(){
    int ele;
    printf("Enter element: "); scanf("%d",&ele);
    struct node *newnode = newnode();
    newnode->prev = NULL;
    newnode->data=ele;
    newnode->next=NULL;
    if(start == NULL){
        start = newnode;
        end = start;
        return;
    }
    
}
int main()
{
    return 0;
}