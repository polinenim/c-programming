#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the X value");
	scanf("%d",&x);
	printf("enter the Y values");
	scanf("%d",&y);
	if(x>0 && y>0)
	{
		printf("First quadrant");
	}
	else if(x<0 && y>0)
	{
		printf("Second quadrant");
	}
	else if(x<0 && y<0)
	{
		printf("Third quadrant");
	}
	else if(x>0 && y<0)
	{
		printf("Fourth quadrant");
	}
	else if(x==0 && y==0)
	{
		printf("at origin");
	}
	return 0;
}
