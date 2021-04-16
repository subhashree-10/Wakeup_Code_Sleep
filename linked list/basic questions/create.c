#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct  node *head,*newnode,*temp;
void traversal(struct node *p)
{
    struct node *ptr;
    ptr=head;
    if(head==NULL)
    {
        return;
    }
    traversal(ptr->next);
    printf("%d",ptr->data);
}

 void create(int n)
{
    head=(struct node*)malloc(sizeof(struct node));
    head=NULL;
    temp=(struct node*)malloc(sizeof(struct node));
   
  printf("enter the elements for the list:\n");
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
  else
  {
    temp->next=newnode;
    temp=temp->next;
  }
  }
}
void display(struct node *p)
{
    printf("now the list contains:\n");
    
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }
}
void main()
{
    int n;
  printf("enter the size of the list:\n");
  scanf("%d",&n);
  create(n);
  display(head);
  traversal(head);
  }