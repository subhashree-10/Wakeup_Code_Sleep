#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};
struct node *head,*temp,*newnode;
void create(int n)
{
    head=(struct node*)malloc(sizeof(struct node));
    head=NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    
    printf("enter data to the list:\n");
    for(int i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=temp->next;
        }
    }
}
void display(struct node *p)
{
    printf("the given linked list:\n");
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void delete(struct node *p,int n,int index)
{
    if(index==0)
    {
       int l=p->data;
        head=head->next;
    }
    else if(index==n-1)
    {
         while(p->next==NULL)
        {
           int l=p->data;
           p->next=p;
        }
         
    }
    
   display(head); 
}

void main()
{

  int n,index,ele;
  printf("enter the size of the list:\n");
  scanf("%d",&n);
  create(n);
  display(head);
  printf("\n");
  scanf("%d",&index);
  delete(head,n,index);
}