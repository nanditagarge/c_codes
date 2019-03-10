#include<stdio.h>
#include<stdlib.h>
//REVERSAL OF AN ARRAY
int main()
{
	int a[100],i,n,x;
	printf("enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("enter the elements of the array\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n/2-1;i++){
		x=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=x;
	}
	printf("the new reversed array is:\n");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}