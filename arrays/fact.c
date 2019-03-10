#include<stdio.h>

int fact (int n);


int main()
{
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	printf("enter the numner %d and its factorial %d",n, fact(n));
	return 0;
}


int fact(int n)
{
	if(n>=1)
	{
		return (n) * fact(n-1);
		
	}
	                  
	else
		return 1;
}