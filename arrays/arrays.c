#include <stdio.h>
//traversal of an array
void main()
{
	int n,a[n];
	printf("enter the value of n\n");
	scanf("%d",&n);
	printf("enter the elements of the array");
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	
	for(int k=1;k<=n;k++){
		printf("%d",a[k]);

	}
	return a;
	    

}
