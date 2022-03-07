#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j,n;
	char a[100];
	printf("enter the string:");
	scanf("%s",a);
	n=strlen(a);
	int f[n];
	for(i=0;i<n;i++)
	{
		f[i]=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				f[i]=f[i]+1;
				a[j]='0';
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!='0')
		{
			printf("%c is %d times\n",a[i],f[i]);
		}
	}
	return 0;
}

