#include<stdio.h>

int fib(int n);

int main()
{
	int n,i;
	printf("enter the value of n\n");
	scanf("%d",&n);

}

int fib(int n)
{
	if(n == 0 ||n == 1)
		return n;
	else
	{
		
		return (fib(n-1)+fib(n-2));

	}


}