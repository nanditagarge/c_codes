#include<stdio.h>
#include<stdlib.h>

int top = -1,stack[10];
void push();
void pop();
void peep();
void display();
void main()
{
	int n,i;
	printf("enter the number of elements in the stack\n");
	scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
    	push();


    }
    pop();

	display();
	

}
void push()
{
	int val,n;
	if(top==n-1)
	{
		printf("stack if full\n");
	}
	else
	{
		printf("enter the element push\n");
		scanf("%d",&val);
		top= top+1;
		stack[top]=val;
	}

}
void pop()
{
	if(top == -1)
	{
		printf("stack is empty\n");

	}
	else
	{
		printf("deleted element is %d \n",stack[top]);
		top=top-1;
	}
}



void display()
{
	int i;
	if(top == -1)
	{
		printf("stack is empty\n");
	}
	else
	{
		for(i=top;i>=0;--i){
			printf("%d",stack[i] );
		}
	}
}