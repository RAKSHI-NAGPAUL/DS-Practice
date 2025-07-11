#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
    struct Node *pre;
};
struct Node *head=NULL;
struct Node *tail=NULL;
void insertAtBegin(int data)
{
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->pre=NULL;
    newnode->next=head;
    if(head!=NULL)
    head->pre=newnode;
    else
    tail=newnode;
    head=newnode;
}
void makecircular()
{
    tail->next=head;
    head->pre=tail;
}
void sloveproblem(int k)
{
    struct Node *current =head;
    while(current->next!=current)
    {
        
    int count=1;
    while(count<k)
    {
        //printf("%d",count);
        count++;
        current=current->next;
    }
    printf("player %d is eliminated\n",current->data);
    current->next->pre=current->pre;
    current->pre->next=current->next;
    if(current==head)
    head=current->next;
    
    struct Node *temp=current;
    current=current->next;
    free(temp);
    }
    printf("Player %d is winner!..\n",current->data);
    free(current);
}
int main()
{
    int i,k;
    scanf("%d",&k);
    for(i=1;i<=10;i++)
    {
        insertAtBegin(i);
    }
    makecircular();
    sloveproblem(k);
    //printf("Hello World");
    return 0;
}
