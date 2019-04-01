#include<stdio.h>
void sparse();

int main()
{
    int i, j, m, n, k=0, l=0;
    int matrix[10][20];

    printf("Enter number of rows : ");
    scanf("%d", &m);
    printf("Enter number of columns : ");
    scanf("%d", &n);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter data in [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

   
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    

    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		
    		if(matrix[i][j]==0)
    		{
    			k=k+1;
    		}
    		else
    		{
    			l=l+1;
    		}
    		
    	}
    }
    printf("%d,%d",l,k);

    if(k>l){
    	printf("the given is a sparse matrix\n");
    }
    else
    	printf("not a sparse matrix\n");

    sparse();

   
void sparse()
{
	int h,p,i,j;
    int a[h][p];

	if(k>l)
    {
    	
    	a[0][0]=m;
    	a[0][1]=n;
    	a[0][2]=l;
    	for(h=1;h<l+2;h++)
    	{
    		for(i=0;i<m;i++)
    		{
    			for(j=0;j<n;j++)
    			{
    				if(matrix[i][j]!=0)
    				{
    					a[h][0]=i;
    					a[h][1]=j;
    					a[h][2]=matrix[i][j];
    				}
    			}
    		}
    	}
    }

  for(i=0;i<h;i++)
  {
  	for(j=0;j<p;j++)
  	{
  		printf("%d",a[h][p]);
  	}
  }
}

    
    

    			
 
    		
    	
  
    	
    	
    


