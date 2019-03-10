#include<stdio.h>

void bubblesort(int a[],int n);
void main()
{
	int a[100];
	int n,i;
	printf("enter the value of n\n");
	scanf("%d",&n);
	printf("enter elements of array\n");

	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		

	}
	bubblesort(a,n);

}

void bubblesort(int a[],int n)
{
	int j;
	int k,temp,i;
	for(k=1;k<=n-1;k++)
	{
		for(j=1;j<=n-1;j++)
		{
		
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		

	}
	for(i=1;i<=n;i++)
		{
			printf("%d",a[i]);
	    }
	
	
	
}