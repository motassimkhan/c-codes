#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Node
{
    int data;
    struct Node *next;
} strn;

strn *head = NULL;

void insert(strn *head)
{
    int pos, data;
    printf("\nEnter POSITION:");
    scanf("%d", &pos);
    printf("\nEnter DATA:");
    scanf("%d", &data);
    strn *newnode = (strn *)malloc(sizeof(strn));
    newnode->data = data;
    if (pos == 1)
    {
        newnode->next = head;
        head = newnode;
        return;
    }
    strn *temp = head;
    for (int i = 0; i< pos - 2; i++){
        temp = temp -> next;  
    }
    newnode->next = temp -> next;
    temp->next = newnode;
}
void traversal(strn *head)
{
    if (head == NULL)
    {
        printf("\nList Is Empty!!!\n");
    }
    printf("\n");
    while (head != NULL)
    {
        printf("%d  ", head->data);
        head = head->next;
    }
}
void deleteNodeFirst(strn *head)
{
    if (head == NULL)
    {
        printf("list empty\n");
    }
    strn *ptr = head;
    head = head->next;
    free(ptr);
    printf("\nAfter deletion:");
    traversal(head);
}
int main()
{
    int data, ch;
    strn *first = (strn *)malloc(sizeof(strn));
    strn *head = (strn *)malloc(sizeof(strn));
    head->data = 2003;
    head->next = first;
    first->data = 2004;
    first->next = NULL;
    while (true)
    {
        printf("\n\nEnter choice\n1.Add element \n2.view list\n3.Delete first element\n0.Exit\nEnter Choice: ");
        scanf("%d", &ch);
        if (ch == 0)
        {
            break;
        }
        if (ch == 1)
        {
            insert(head);
        }
        if (ch == 2)
        {
            traversal(head);
        }
        if (ch == 3)
        {
            deleteNodeFirst(head);
        }
    }
    return 0;
}