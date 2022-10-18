#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *insertInOreder(struct node *head,int data){
    struct  node *ptr,*temp;
    temp=malloc(sizeof(struct node));
    temp->data=data;
    if(head==NULL || data< head->data)
    {
        temp->link=head;
        head=temp;
        return head;
    }
    ptr=head;
    while(ptr->link!=NULL && ptr->link->data <=data)
    {
        ptr=ptr->link;
        temp->link=ptr->link;
        ptr->link=temp;
        return head;
    }
}
void display(struct node *head)
{
    while (head != NULL)
    {
    printf("%d   ", head->data);
    head = head->link;
    }
    printf("\n");
}
int main()
{struct  node *head=malloc(sizeof(struct  node));//Allocating memory size to node struct.
    head->data=6;//Give data of first node as value of 45
    head->link=NULL;
    head = insertInOreder(head,4);
    head=insertInOreder(head,44);
    head=insertInOreder(head,17);
    display(head);
}