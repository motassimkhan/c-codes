// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node*next;
// };
// struct node *start = NULL, *end = NULL;

// void display(){
//     printf("LIST::\n");
//     printf(" %d ", start->data);
//     struct node *temp = start->next;
//     while(temp != start){
//         printf(" %d ",temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
//     return;
// }
// void insert(){
//     struct node *newnode = (struct node*) malloc(sizeof(struct node));
//     int ele;
//     printf("Enter Element: ");
//     scanf("%d",&ele);
//     newnode->data = ele;
//     newnode->next = NULL;
//     if (start == NULL){
//         start = newnode;
//         start ->next = newnode;
//     }
//     if(end == NULL){
//         end = start;
//         return;
//     }
//     end -> next = newnode;
//     end = end->next;
//     end->next = start;
//     return;
// }
// void delete(){
//     if(start == NULL) {
//         printf(":Empty:");
//         return;
//     }
//     struct node *temp = start;
//     start = start->next;
//     end ->next = start;
//     free (temp);

// }
// void main()
// {
//     int num;
//     printf("Enter num of elements to enter:");
//     scanf("%d",&num);
//     for(int i =0; i< num; i++){
//         insert();
//     }
//     display();
//     delete();
//     display();
//     return;
// }
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node *start = NULL, *end = NULL;

void display(){
    printf("%d ", start->data);
    struct node *temp = start->next;
    while(temp != start){
        printf(" %d ",temp->data);
        temp = temp->next;
    }
    return;
}
void insert(int ele){
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = ele;
    newnode->next = NULL;
    if (start == NULL){
        start = newnode;
        start ->next = newnode;
    }
    if(end == NULL){
        end = start;
        return;
    }
    end -> next = newnode;
    end = end->next;
    end->next = start;
    return;
}
void delete(){
    if(start == NULL) {
        return;
    }
    struct node *temp = start;
    if (start == end)
    {
        start = NULL;
        end = NULL;
    }
     else
    {
        start = start->next;
        end->next = start;
    }
    free (temp);
}
void main()
{
    int num,ele;
    scanf("%d",&num);
    for(int i =0; i< num; i++){
      scanf("%d",&ele);
        insert(ele);
    }
    delete();
    display();
    return;
}