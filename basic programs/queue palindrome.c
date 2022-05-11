#include<stdio.h>
#include<string.h>
char q[10];
int f=0,r=0;
void insert(char a);
void delete();
int main()
{
	char a[10],m;
	int i;
	printf("enter the string:");
	scanf("%s",a);
	int n=(strlen(a))/2;
	for(i=0;a[i]!='\0';i++)
	{
		insert(a[i]);
	}
	
	m=a[n];
	r=r-1;
	for(i=0;i<=r;i++)
	{
		if(q[f]==q[r])
		{
			delete();
			r=r-2;
		}
		else
		{
			printf("not a palindrome");
			break;
		}
	}
	if(q[f]==m)
	{
		printf("palindrome");
	}
	return 0;
}
void insert(char a)
{
	q[r]=a;
	r=r+1;
}
void delete()
{
	int i;
	for(i=0;i<=r;i++)
	{
		q[i]=q[i+1];
	}
}
