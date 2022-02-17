#include<stdio.h>
#include<math.h>
int sqr(int n);
int main()
{
	int n;
	printf("enter");
	scanf("%d",&n);
	printf("is the squre root of a number",sqr(n));
	return 0;
}
int sqr(int n)
{
	float f;
	f=sqrt(n);
	printf("%f",f);
	return f;
}
