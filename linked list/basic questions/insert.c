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
void insert(struct node *p,int n,int index,int ele)
{
    if(index==0)
    {
        struct node * tmp;
        tmp=(struct node*)malloc(sizeof(struct node));
        tmp->data=ele;
        tmp->next=head;
        head=tmp;
    }
    else if(index==n)
    {
         while(p->next!=NULL)
        {
            p=p->next;
        }
         struct node * tmp;
        tmp=(struct node*)malloc(sizeof(struct node));
        tmp->data=ele;
        tmp->next=NULL;
        p->next=tmp;
    }
    else
    {
        struct node *q;
        q=(struct node*)malloc(sizeof(struct node));
        q=head;
        struct node * tmp;
        tmp=(struct node*)malloc(sizeof(struct node));
        tmp->data=ele;
        tmp->next=NULL;
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        for(int i=0;i<index;i++)
        {
            q=q->next;
        }
        p->next=tmp;
        tmp->next=q;
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
  scanf("%d%d",&index,&ele);
  insert(head,n,index,ele);
}