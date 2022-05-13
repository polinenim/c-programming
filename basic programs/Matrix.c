#include<stdio.h>
int main()
{
	int i,j,r,c;
	printf("enter the size of a row");
	scanf("%d",&r);
	printf("enter the size of column");
	scanf("%d",&c);
	int a[r][c],b[r][c],s[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter a values:");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter b values:");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			s[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("the sum is: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
	return 0;
}

