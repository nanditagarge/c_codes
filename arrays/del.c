#include <stdio.h>
#include <stdlib.h>
int main()
{
	int array[100],k,i,n;
	printf("enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("enter the elements of the array\n");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
		printf("enter the position of deletion :k\n" );
		scanf("%d",&k);
		if(k>=n+1)
			printf("deletion not possible\n");
		else
		{
			for(i=k-1;i<n-1;i++){
				array[i]=array[i+1];
			}
				printf("resultant array:\n");
				for(i=0;i<n-1;i++){
					printf("%d\n",array[i]);
				}
			
		}
		return 0;

	

}