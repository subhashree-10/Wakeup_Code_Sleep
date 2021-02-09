#include<stdio.h>
#include<stdlib.h>
struct array
{
  int total_size;
  int used_size;
  int *a;
};
void createarray(struct array *arr)
{
  arr->a=(int*)malloc(arr->total_size*sizeof(int));
  printf("enter the elements in the array:\n");
  for(int i=0;i<arr->used_size;i++)
  {
    scanf("%d",&arr->a[i]);
  }
}
void insert(struct array *arr, int index,int num)
{
   if(index==arr->used_size)
   {
     arr->a[arr->used_size]=num;
     arr->used_size++;
   }
   else
   {
     arr->used_size++;
     for(int i=arr->used_size;i>index;i--)
     {
       arr->a[i]=arr->a[i-1];
     }
     arr->a[index]=num;
   }
   
}
void display(struct array *arr)
{
  printf("now the array contains:\n"); 
  for(int i=0;i<arr->used_size;i++)
  {
    printf("%d \t",(arr->a)[i]);
  }

}

int main()
{
  struct array arr;
  printf("enter the size of array:\n");
  scanf("%d",&arr.total_size);
  printf("enter the size of array to be used:\n");
  scanf("%d",&arr.used_size);
  createarray(&arr);
  int index,num;
  printf("enter the index postion of the element to be inserted:\n");
  scanf("%d",&index);
  printf("enter the elements to be inserted :\n");
  scanf("%d",&num);
  insert(&arr,index,num);
  display(&arr);
 return 0;
}