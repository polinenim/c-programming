#include<stdio.h>
int main()
{
	int n,t,i,j;
	printf("enter the size of array");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
		printf("enter");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("the value:%d\n",a[i]);
	}
	return 0;
}
