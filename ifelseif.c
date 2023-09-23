#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node* left;
    int num;
    struct node* right;
}node;

node* findMin(node *root){
    node* current = root;
    if(current == NULL) return -1;
   while (current->left != NULL)
   {
        current = current->left;
   }
        return current->num;
}

node* findMax(node *root){
    node* current = root;
    if(current == NULL) return -1;
   while (current->right != NULL)
   {
        current = current->right;
   }
        return current->num;
}



int main()
{
    
}