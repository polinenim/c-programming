#include <stdio.h>
int main() 
{
    int n,i;
    printf("Enter a positive integer range: ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
		if(i%2==0)
		{
			printf("THE EVEN NUMBERS IS:%d\n",i);
		}
	}
   return 0;
}
