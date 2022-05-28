#include<stdio.h>
int main()
{
    int size1, size2, newSize, i, j;
    printf("Enter the number of elements for  First Array  :\n");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter the elements for First Array :\n");
    for(i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements for  Second Array  :  \n");
    scanf("%d", &size2);   
    int arr2[size2];       
    printf("Enter the elements for Second Array  :\n");
    for(i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    newSize = size1 + size2;
    int newArr[newSize];
    for(i = 0; i < size1; i++)
    {
        newArr[i] = arr1[i];
    }
    for(i = 0, j = size1; j < newSize && i < size2; i++, j++)
    {
        newArr[j] = arr2[i];
    }
    for(i = 0; i < newSize; i++)
    {
        printf(" %d \t ",newArr[i]);
    }
    return 0;
}
