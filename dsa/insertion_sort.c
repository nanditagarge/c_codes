#include<stdio.h>

int* insertionsort(int a[], int n){
	for(int j=1;j<n;j++){
		int key=a[j];
		int i=j-1;
		while(i>=0 && a[i]>key){
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=key;

	}
	printf("within fn");
	for(int i=0;i<n;i++){
    	printf("%d",a[i]);
    }

	return a;
}

void main(){
	int n;
	printf("enter the size of array");
	scanf("%d",&n);
	int a[n];
	printf("enter %d elements",n);
    for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    int *b;
    b=insertionsort(a,n); 
    for(int i=0;i<n;i++){
    	printf("%d",b[i]);
    }

}