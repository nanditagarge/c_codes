#include <stdio.h>
#include <stdlib.h>
int* delete(int* a,int k){
	int n;
	for(int i=k-1;i<n-1;i++){
		a[i]=a[i+1];
	}
	return a;

}
int main()
{
	int n;
	printf("enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	int a[100];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int k;
	printf("enter the value of k\n");
	scanf("%d",&k);
	
	
	

	int* b;
	b = delete(a,k);

	printf("the new array is :");
	for(int i=0;i<n-1;i++){
		printf("%d",b[i]);
		printf("\n");
	}
}
