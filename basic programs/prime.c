#include<stdio.h>
int main()
{
	int a,b,i,j,c;
	printf("enter the first number");
	scanf("%d",&a);
	printf("enter the last number");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		c=0;
		for(j=1;j<=b;j++)
		{
			if(i%j==0)
			{
				c=c+1;
			}
		}
	    if(c==2)
	    {
			printf(" the prime number is:%d\n",i);
		}
	}
	return 0;
}
