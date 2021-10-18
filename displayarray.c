#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};


void Display(struct Array arr){
    int i;
    printf("Elements are:");
    for(i=0;i<arr.length;i++)
    printf("%d ",arr.A[i]);
}
int main()
{
    struct Array arr;
    int i,n;
    printf("Enter the size");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));

    printf("enter the length");
    scanf("%d",&n);

    printf("Enter all the elements");
    for(i=0;i<n;i++)
    scanf("%d",&arr.A[i]);

    arr.length=n;
     Display(arr);


}