#include <stdio.h>
#include <stdlib.h>

int * insert (int* a,int n, int k) {
	for(int i=n-1;i>=k-1;i--){
		a[i+1]=a[i];
	}
	int item;
	printf("enter the value to be inserted\n");
	scanf("%d",&item);
	a[k-1]=item;
	return a;
}



int main()
{
	int n;
	printf("enter the size of array");
	scanf("%d",&n);
	int *a;
	printf("enter %d elements",n);
    for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    int k;
	printf("enter the value of k\n");
	scanf("%d",&k);
	
	int *b;
	b = insert(a,n,k);

	printf("the new array is :\n");
	for(int i=0;i<=n+1;i++){
    	printf("%d",b[i]);
    	printf("\n");
    }

}


