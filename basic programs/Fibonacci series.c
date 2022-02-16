#include<stdio.h>
int main()
{
	int n,i,f1=0,f2=1,f3;
	printf("enter the fibonacci number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f3=f1+f2;
		f1=f2;
		f2=f3;
		printf("the fibonacci numbers%d\n",f3);
	}
	return 0;
}
