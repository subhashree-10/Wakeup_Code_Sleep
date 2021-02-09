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
  printf("enter the elements in the array(in sorted manner):\n");
  for(int i=0;i<arr->used_size;i++)
  {
    scanf("%d",&arr->a[i]);
  }
}

void display(struct array *arr)
{
  printf(" \n now the array contains:\n"); 
  for(int i=0;i<arr->used_size;i++)
  {
    printf("%d \t",(arr->a)[i]);
  }

}
int binarysearch(struct array *arr,int temp)
{
   int low,high,mid;
   low=0;
   high=arr->used_size-1;
   mid=(low+high)/2;
   while(low<=high)
   {
       if(arr->a[mid]==temp)
       {
           return mid;
       }
          else if(arr->a[mid]<temp)
           {
               low=mid+1;
           }
           else{
               high=mid-1;
           }
       
   }
   return 0;
}

int main()
{
    int ele;
  struct array arr;
  printf("enter the size of array:\n");
  scanf("%d",&arr.total_size);
  printf("enter the size of array to be used:\n");
  scanf("%d",&arr.used_size);
  createarray(&arr);
  display(&arr);
  printf("\n enter the element to be searched:\n");
  scanf("%d",&ele);
  int index=binarysearch(&arr,ele);
  if(index>0)
  printf("\n the element %d found at position %d",ele,index);
  else
  printf("element not found");
 return 0;
}