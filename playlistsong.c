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
void insertAtBegin(char data[])
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
    struct Node *temp=head;
    if(head==NULL)
    {
        printf("No songs to play..");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%s->",temp->data);
            temp=temp->next;
        }
        printf("NULL\n");
    }
}

int main()
{
    int n,i;
    char a[100];
    while(1)
    {
    printf("1:add song\n2:display\n3:exit\n");
    scanf("%d",&n);
    getchar();
    switch(n)
    {
        case 1:
        printf("\nEnter song name\n");
        fgets(a, sizeof(a),stdin);
        a[strcspn(a,"\n")]=0;
       // scanf("%[^\n]%*c",a);
        insertAtBegin(a);
        printf("Song added to your playlist\n");
        break;
        case 2:
        display();
        break;
        case 3:
        printf("\nexiting from playlist");
        exit(0);
        default:
        printf("\nNot exists");
    }
    }
    //printf("Hello World");

    return 0;
}
