#include <stdio.h>

int MaxMin(int A[],int low, int high)
{
    int mid,i=0,minmax[]={0,0};
    if (high==low)
        {
            printf("Array is empty");
            return minmax[];
        }
    if (high==low+1)
        {
            while(A[i]!=0) i++;
            minmax[0]=minmax[1]=A[i];
        }
    mid=(low+high)/2;
    MaxMin()
}
void main()
{
    int i,A[10],*arr,array_size;
    printf("Enter elements (<=10) in new line\n");
    for (i+0;i<10;i++)
        printf("For %d element",i+1);
        scanf("\n%d",&A[i]);
    printf("Enter number of non-zero elements: ")
    scanf("%d",&array_size);
    arr=MaxMin(A,0,array_size);
    // For first call low=0 & high=#non-zero elements
    printf("Max: %d, Min: %d",arr[0],arr[1]);
}
