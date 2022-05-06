#include<stdio.h>
#include<string.h>
char stack[10];
int top=-1;
void push(char a);
void pop();
int main()
{
	char a[10];
	printf("Enter the string:");
	scanf("%s",a);
	int mid=(strlen(a))/2,front=0,i;
	for(i=0;a[i]!='\0';i++)
	{
		push(a[i]);
	}
	for(i=0;i<=mid;i++)
	{
		if(stack[top]==stack[front])
		{
			pop();
			front=front+1;
		}
		else
		{
			printf("Not a palindrome");
			break;
		}
	}
	if (top=(front-1))
	{
		printf("Palindrome");
	}
	return 0;
}
void pop()
{
	top=top-1;
}
void push(char a)
{
	top=top+1;
	stack[top]=a;
}

