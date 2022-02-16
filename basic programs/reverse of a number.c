#include<stdio.h>
int main()
{
	int n,r,s=0;
	printf("enter");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	printf("the reverse is%d\n",s);
	return 0;
}
