#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void listtraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = head;
    ptr->data = data;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    ptr->next = temp;
    return ptr;
}
struct Node *insertAtindex(struct Node *head, int index, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = head;
    int i = 0;
    if (index == 0)
    {
        insertAtFirst(head, data);
    }
    else
    {
        while (i != index - 1)
        {
            temp = temp->next;
            i++;
        }
        ptr->data = data;
        ptr->next = temp->next;
        temp->next = ptr;
        return (head);
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    head->data = 100;
    head->next = second;
    second->data = 200;
    second->next = third;
    third->data = 300;
    third->next = fourth;
    fourth->data = 400;
    fourth->next = NULL;
    // k
    //  int num;
    //  printf("Enter element to add in list: ");
    //  scanf("%d",&num);
    //  N *ptr;
    //  ptr = (N*) malloc(sizeof(N));
    //  ptr -> data = num;
    //  ptr ->next=head;
    listtraversal(head);
    head = insertAtindex(head, 10, 46);
    listtraversal(head);

    return 0;
}