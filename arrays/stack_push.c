#include<stdio.h>
#include<stdlib.h>
int top=-1,stack[10];
void push();
void display();
void main()
{
	int MAX,i;
	printf("enter the max number of element (max 10)\n");
	scanf("%d",&MAX);
	for(i=1;i<=MAX;i++){
		push();

	}
	display();

}
void push()
{
	int val,MAX;
	if(top==MAX-1)
	{
		printf("stack if full\n");
	}
	else
	{
		printf("enter element to push");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;

	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("stackis empty");

	}
	else
	{
		for(i=top;i>=0;--i)
			printf("%d",stack[i]);
	}
}