#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *next;
    int data;
};
struct node *head = NULL;

void insert(int ele)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = ele;
    temp->next = head;
    head = temp;
}
void delete(int ele)
{
    struct node *temp = head, *t;
    if (temp->data == ele)
    {
        head = head->next;
        free(temp);
        printf("\nDeleted Element %d", ele);
    }
    while (temp->next != NULL)
    {
        if (temp->next->data == ele)
        {
            t = temp->next;
            temp->next = t->next;
            printf("\nDeleted element %d", ele);
            free(t);
            return;
        }
        temp = temp->next;
    }
    printf("\nElement Not Found!");
}

void display()
{
    struct node *temp = head;
    printf("\nLinked List:\n");
    while (temp != NULL)
    {
        printf("  %d", temp->data);
        temp = temp->next;
    }
}
void main()
{
    int n,ele,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for (i=1; i<=n; i++){
        scanf("%d",&ele);
        insert(ele);
    }
    display();
    printf("\nEnter element to Delete: ");
    scanf("%d",&ele);
    delete(ele);
    printf("\nAfter Deletion:");
    display();
}