#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void Insertion_at_Beginning(struct node *ptr,int data)
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node*));
    ptr->data = data;
    ptr->data=9;
    scanf("%d",ptr->data);
 
    ptr->data = first;
    return ptr; 
    
    

  
    
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // first  node link to second node;
    head->data = 10;
    head->next = second;

    // second node to third node;
    second->data = 20;
    second->next = third;

    // making third node address null;
    third->data = 30;
    third->next = NULL;

    // Function calling
   Insertion_at_Beginning();

    return 0;
}