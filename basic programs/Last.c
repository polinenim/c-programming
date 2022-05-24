#include <stdio.h>
int main()
{
    int i, n, value,arr[100];
    printf("enter the range of array:");
    scanf("%d", &n);
       for(i = 0; i < n; i++)
    {
        printf("Please give value for index %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Let's Insert Element at end \n ");
    printf("Please give a number to insert at end \n");
    scanf("%d", &value);
    arr[n] = value;
    printf("Element %d is inserted at %d index \n",value,n);
    printf("New Array is \n ");
     
    for(i = 0; i < n+1; i++)
    {
       printf("%d \t",arr[i]);
    }
}
