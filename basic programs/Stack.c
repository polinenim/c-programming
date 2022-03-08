#include<stdio.h>
#include<stdlib.h>
#define n 5
void push();
void pop();
void display();
int s[n],top=-1,item,i,ch=1;
int main()
{
	printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
	while(ch)
	{
		printf("Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:exit(0);
			break;
			default:printf("Wrong choice\n");
		}
	}
	
	return 0;
}
void push()
{
	if(top==n-1)
	{
		printf("\nstack is full\n");
	}
	else
	{
		top=top+1;
		printf("enter the value");
		scanf("%d",&item);
		s[top]=item;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\n stack is empty");
	}
	else
	{
		printf("\n The deleted item is:%d\n",s[top]);
		top=top-1;
	}
}
void display()
{
	if(top==-1)
	{
		printf("\n stack is empty\n");
	}
	else
	{
		for(i=0;i<=top;i++)
		{
			printf("%d\n",s[i]);
		}
	}
}

