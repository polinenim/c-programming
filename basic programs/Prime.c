#include<stdio.h>
int main()
{
	int a,j,c=0;
	printf("enter a number");
	scanf("%d",&a);
	for(j=1;j<=a;j++)
	{
		if(a%j==0)
		{
			c=c+1;
		}
	}
	if(c==2)
    {
		printf("%d is a prime number\n",a);
	}
	if(c!=2)
	{
		printf("%d is not a prime number\n",a);
	}
	return 0;
	
}
