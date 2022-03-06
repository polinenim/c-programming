#include<stdio.h>
int main()
{
	int i,low,high,mid,n,search;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the elements:");
	    scanf("%d",&a[i]);
	}
	printf("enter the element to be search:");
	scanf("%d",&search);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(search>a[mid])
		{
			low=mid+1;
		}
		else if(search==a[mid])
		{
			printf("%d is present at%d",search,mid);
			break;
		}
		else
		{
			high=mid-1;
		}
		mid=(low+high)/2;
	}
	if(low>high)
	{
		printf("%d is not found",search);
	}
	return 0;
}

