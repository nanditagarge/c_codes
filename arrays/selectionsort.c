#include<stdio.h>
#include<stdlib.h>

void selctionsort(int a[], int n);

void main()
{
	int i,n,a[100];
	printf("enter the value of n\n");
	scanf("%d",&n);
	printf("enter the elements of the array\n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	selectionsort(a,n);
}

void selectionsort(int a[], int n)
{
	int i,j,k,min,temp;

	for(i=0;i<n-1;i++)
	{
		min =i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
				min=j;
		}

		temp=a[min];
		a[min]=a[i];
		a[i]=temp;


	}

	for(k=0;k<n;k++)
	{
		printf("%d",a[k]);
	}
}