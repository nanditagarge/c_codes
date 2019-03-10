#include<stdio.h>
#include<stdlib.h>

void insertionsort(int a[],int n);

void main()
{
	int i,n,a[100];

	printf("enter the value of n\n");
	scanf("%d",&n);

	printf("enter the elements into array\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}

	insertionsort(a,n);
}

void insertionsort(int a[],int n)
{
	int i,j,k,m;

	for(i=1;i<=n;i++)
	{
		k=a[i];
		for(j=i-1;j>0 & k<a[j];j--)
		{
			a[j+1] = a[j];
		}
		a[j+1]=k;
	}

	for(m=1;m<=n;m++)
	{
		printf("%d",a[m]);
	}

}