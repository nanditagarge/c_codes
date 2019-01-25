#include<stdio.h>
//array sorted such that difference of consecutive elements is max.
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
	return a;

}

void printarray(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}

int* maxsu(int a[],int n){
	int* c;
	int test = (n/2)+1;
	int d[test];
	int e[test];

	//sorting the array in ascending order
	c=insertionsort(a,n);
 //	printarray(c,n);

	//retriving the first half of the array ( the smallest elements)
	for(int i=0;i<n/2;i++){
		d[i]=c[i];
	}
//	printarray(d,n/2);

	//retrieving the second half of the array ( the largest elements)
	for(int i=n/2;i<=n;i++){
		e[i-n/2]=a[i];
	}
// 	printarray(e,n/2);
	printarray(c,n);

//arranging the elements from the smaller numbers array and the largest numbers array one after the other to form the final result array.
for(int i=0;i<=n/2;i++){
	a[2*i]=e[i];
	a[2*i+1]=d[i-n/2];
}

	return a;
}


void main(){
	int n;
	printf("\nenter the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("\nenter %d elements\n",n);
    for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    int *b;
    b=maxsu(a,n);
    printf("\narray sorted such that sum of differences of consecutive elements is maximum :\n"); 
    printarray(b,n);

}