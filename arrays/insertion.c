#include <stdio.h>
#include <stdlib.h>
void main()
{
	int n,i,j,k,item;
	int a[n];
	printf("enter the value of n\n");
	scanf("%d",&n);
	printf("enter the elements of the array a\n");
	for(i=1;i<=n;i++){
		scanf("%d",a[i]);
	}
	printf("enter the value of k\n");
	scanf("%d",&k);
	for(j=n;j<k;j--){
		a[j]=a[j+1];
	}
	printf("enter teh value to be inserted\n");
	scanf("%d",&item);
	a[k]=item;
	n=n+1;
	return a;


}