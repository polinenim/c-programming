#include <stdio.h>
int main() 
{
	int n;
    int i=0;
    printf("Enter a positive integer between 0 to 100 and enter -1 to stop: ");
    scanf("%d",&n);
    while(n!=-1)
    {
		if(n>=0 && n<=100)
		{
			i=i+n;
		}
		else
		printf("enter the value");
		scanf("%d",&n);
	}	
	printf("The total sum is:%d",i);
	return 0;
}
