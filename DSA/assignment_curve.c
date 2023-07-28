#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void delete(){
    struct node *temp = head;
    struct node *temp2 = head->next;
    while (temp2 ->next != NULL)
    {
        temp = temp -> next;
        temp2 = temp2 -> next;
    }
    temp -> next = NULL ;
    free(temp2);
}
void insert(int ele)
{
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        return;
    }
    else
    {
        ptr->data = ele;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
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
        }
    }
}
void display(){
    struct node * temp = head;
    while (temp != NULL){
        printf("%d ",temp -> data );
        temp = temp -> next;
    }
}
int main() {
  int size,ele;
  scanf("%d", &size);
  for (int i = 0; i< size; i++){
    scanf ("%d",&ele);
    insert(ele);
  }
  delete();
  display();
}