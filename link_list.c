#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *link;
};
int main()
{
    strict node *head=NULL;
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NUlL;
    printf("%d",head->data);
    return 0;
}
