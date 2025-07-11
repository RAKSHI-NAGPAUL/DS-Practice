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
void insertAtBegin(char data[100])
{
    struct Node *newnode=(struct Node *)malloc(sizeof(struct Node));
    strcpy(newnode->data,data);
    newnode->pre=NULL;
    newnode->next=head;
    if(head!=NULL)
    {
        head->pre=newnode;
    }
    else
    tail=newnode;
    head=newnode;

}
void display()
{
    struct Node *temp=tail;
        while(temp!=NULL)
        {
            printf("%s\n",temp->data);
            temp=temp->pre;
        }
        printf("Game over");
}

int main()
{
    int n,i=1;
    char a[100];
    while(1)
    {
    printf("1:hint 2:exit\n");
    scanf("%d",&n);
    getchar();
    switch(n)
    {
        case 1:
        printf("Hint %d ",i);
        fgets(a, sizeof(a),stdin);
        a[strcspn(a,"\n")]=0;
        insertAtBegin(a);
    //    if(i==3)
        break;
        case 2:
        display();
        printf("\nexiting from game");
        exit(0);
        default:
        printf("\nNot exists");
    }
    }

    return 0;
}
