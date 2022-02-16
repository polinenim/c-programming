#include<stdio.h>
int main()
{
	int n,f=1,i=1;
    printf("enter the number");
    scanf("%d",&n);
    while(i<=n)
    {
		    f=f*i;
        i=i+1;
    }
    printf("the factorial of a number is: %d",f);
    return 0;
}
