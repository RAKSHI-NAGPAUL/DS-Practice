#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
    char data[100];
    struct Node *next;
};
struct Node *head=NULL;
void insertAtBegin(char data[])
{
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    strcpy(newnode->data,data);
    newnode->next=head;
    head=newnode;
}
void display()
{
    struct Node *temp=head;
    while(temp!=NULL)
    {
        printf("%s-> ",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
int main()
{
    char a[100];
    int n,i;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")]=0;
    insertAtBegin(a);
    }
   // printf("Hello World");
   display();
    return 0;
}
