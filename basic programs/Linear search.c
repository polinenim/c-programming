#include<stdio.h>
int main()
{
	int a[100],b,search,i=0;
	printf("enter the size of array");
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
		printf("enter the values");
	    scanf("%d",&a[i]);
    }
    printf("enter the number to search");
	scanf("%d",&search);
	for(i=0;i<b;i++)
	{
		if(a[i]==search)
	{
	printf("%d is present at location %d",search,i);
	break;
    }
    }
    if(i==b)
    {
		printf("%d is not present in the array",search);
	}
    return 0;
}
