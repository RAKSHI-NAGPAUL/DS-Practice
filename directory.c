#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node
{
    char data[100];
    struct Node *next;
    struct Node *pre;
};
struct Node *head=NULL;
struct Node *tail=NULL;
void insertAtEnd(char data[])
{
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    strcpy(newnode->data,data);
    newnode->pre=NULL;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
     tail->next=newnode;
     newnode->pre=tail;
     tail=newnode;
    }
}
void display()
{
    struct Node *temp=head;
    while(temp!=NULL)
    {
        printf("%s/",temp->data);
        temp=temp->next;
    }
   // temp=temp->next;
    printf("ds.c");
}
int main()
{
    int op,op1,op2;
    printf("1.C drive 2.D drive\n");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        insertAtEnd("C");
        break;
        case 2:
        insertAtEnd("D");
        break;
        default:
        printf("NO directry");
    }
    printf("1.project 2.user\n");
    scanf("%d",&op1);
    switch(op1)
    {
        case 1:
        insertAtEnd("project");
        break;
        case 2:
        insertAtEnd("user");
        break;
        default:
        printf("NO directry");
    }
    printf("1.helloworld 2.file\n");
    scanf("%d",&op1);
    switch(op1)
    {
        case 1:
        insertAtEnd("helloworld");
        break;
        case 2:
        insertAtEnd("file");
        break;
        default:
        printf("NO directry");
    }
    display();
}
