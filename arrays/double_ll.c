#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* forwptr,* backptr;

}* stnode,* ennode;
void create_dll(int n);
void display();
void main()
{
	int n;
	stnode = NULL;
	ennode = NULL;
	printf("enter the no. of nodes\n");
	scanf("%d",&n);
	create_dll(n);
	display();
}
void create_dll(int n)
{
	int i,data;
	struct node* tempnode;

	if(n>=1)
	{
		stnode = (struct node *)malloc(sizeof(struct node));
		if(stnode!=NULL)
		{
			printf("data into node 1 :\n");
			scanf("%d",&data);
			stnode -> info = data;
			stnode -> backptr = NULL;
			stnode -> forwptr = NULL;
			ennode = stnode;
			for(i=2;i<=n;i++){
				tempnode = (struct node *)malloc(sizeof(struct node));
				if(tempnode != NULL)
				{
					printf("input data for %d node\n",i);
					scanf("%d",&data);
					tempnode -> info = data;
					tempnode -> backptr = ennode;
					tempnode -> forwptr = NULL;

					ennode -> forwptr = tempnode;
					ennode = tempnode;

				}
				else
				{
					printf("memory cannot be allocated\n");
					break;
				}
			}
		}
		else
		{
			printf("memory cannot be allocated\n");

		}
	}
}
void display()
{
	struct node * tmp;
	int n=1;
	if(stnode == NULL)
		printf("no data found in the list\n");
	else
	{
		tmp = stnode;
		printf("data in the list is:\n");
		while(tmp!= NULL)
		{
			printf("%d",tmp -> info);
			n++;
			tmp = tmp -> forwptr;
		}
	}

	
		
	
}