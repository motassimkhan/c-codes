#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void insert_beginning();
void insert_middle();
void insert_end();
void Delete_beginning();
void Delete_middle();
void Delete_end();
void Display(){
    struct node* temp = head;
    while(temp != NULL){
        printf("%d ", temp->data );
        temp = temp -> next;
    }
};

void main()
{
    int choice = 0, ch = 0;
    while (choice != 4)
    {
        printf("Linked List:\n1.Insert an Element\n2.Delete an Element\n3.Display List\n4.EXIT");
        printf("\nEnter choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            while (ch != 4)
            {
                printf("\n\tWhere To Insert:\n\t1.Insert at beginning\n\t2.Insert at position\n\t3.Insert at End\n\t4.Back To Main Menu\n\tEnter Choice:");
                scanf("%d", &ch);
                switch (ch)
                {
                case 0:
                    return;
                    break;
                case 1:
                    insert_beginning();
                    break;
                case 2:
                    insert_middle();
                    break;
                case 3:
                    insert_end();
                    break;
                default:
                    printf("\n\tInvalid choice!\n");
                }
            }
            break;

        case 2:
            if (head == NULL)
            {
                printf("Unable to delete\n");
                break;
            }
            printf("Enter the position to delete: ");
            scanf("%d",&pos)
            break;
        case 3:
            Display();
            break;
        default:
            printf("Invalid choice\n");
        }
    }
}
// End Of Main Function

void insert_beginning()
{
    int val;
    printf("\nEnter Data:");
    scanf("%d", &val);
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    head = newnode;
}

void insert_middle()
{
    int val, pos;
    printf("Enter Data: ");
    scanf("%d", &val);
    printf("Enter position: ");
    scanf("%d", &pos);
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;

    struct node *temp = head;
    for (int i = 0; i < pos; i++)
    {
        if (temp->next != NULL)
        {
            temp = temp->next;
        }
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void insert_end()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value?\n");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("\nNode inserted");
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\nNode inserted");
        }
    }
    // int val;
    // printf("Enter Data: ");
    // scanf("%d", &val);

    // struct node *newnode = (struct node *)malloc(sizeof(struct node));
    // newnode->data = val;
    // newnode->next = NULL;
    // struct node *temp = head;
    // while (temp != NULL)
    // {
    //     temp = temp->next;
    // }
    // temp->next = newnode;
}

void Delete_beginning()
{
    struct node *temp = head;
    if (head == NULL)
        printf("\nList is Empty\n");
    else
    {
        head = temp->next;
        free(temp);
        printf("\nFirst Node Deleted");
    }
}
void Delete_middle()
{
    struct node *temp, *temp2;
    int loc;
    printf("\n Enter the location: \n");
    scanf("%d", &loc);
    temp = head;
    for (int i = 0; i < loc; i++)
    {
        temp2 = temp;
        temp = temp->next;
        if (temp == NULL)
        {
            printf("\nCant Delete");
        }
    }
    temp2->next = temp->next;
    free(temp);
    printf("\nDeleted Node ");
}
void Delete_end()
{
    printf("ok");
}
void Display()
{
    struct node *temp = head;
    if (head == NULL)
        printf("nothin to print");
    else
    {
        while (temp != NULL)
        {
            printf("%d --> ", temp->data);
            temp = temp->next;
        }
    }
}
