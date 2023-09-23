#include <stdio.h> 
#include <stdlib.h> 
struct node {
    struct node *left;
    int data;
    struct node *right;
};

void insert(struct node **p, int ele){
    if((*p) == NULL){
        (*p) = (struct node *) malloc (sizeof(struct node));
        (*p)->left = NULL;
        (*p)->data = ele;
        (*p)->right = NULL;
    }
    else if((*p)->data < ele) insert(&((*p)->right), ele);
    else if((*p)->data > ele) insert(&((*p)->left), ele);
    else printf("Cannot insert Element already exists\n");
}
void construct (struct node *p, struct node **q){
    if (p!=NULL){
        if(p->data > 0)
            insert(q,p->data);
        construct(p->left, q);
        construct(p->right, q);
    }
}
void delete(struct node **p, int ele){
    if (*p == NULL) {
        printf("Element not present\n");
        return;
    }
    if ((*p)->data == ele){
        struct node* temp = (*p);
        temp->data = 0- temp->data;
        struct node *q = NULL;
        construct(temp, &q);
        (*p)=q;
        return;
    }
    else if((*p)->data > ele) delete(&((*p)->left), ele);
    else if((*p)->data < ele) delete(&((*p)->right), ele);
}
void postorder(struct node *p){
    postorder(p->left);
    postorder(p->right);
    printf("  %d");
}
int main()
{
    int n,ele;
    struct node *p = NULL;
    printf("\nBST\nEnter number of elements: ");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for (int i = 1; i <= n; i++){
        scanf("%d",&ele);
        insert(&p,ele);
    }
    printf("\nInserted\n\nBST: ");
    postorder(p);
    printf("Emter Element to delete: ");
    scanf("%d",&ele);
    delete(&(*p), ele);
    printf("\nAfter Deletion: ");
    postorder(p);
    printf("\n\n=============END=============\n\n");
    return 0;
}