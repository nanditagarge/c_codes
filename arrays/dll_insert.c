#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* forwptr,* backptr;
}* stnode,* ennode;
void create_dll(int n);
void insert_dll(int item);
void display();
void main()
{
	int n,item;
	stnode = NULL;
	ennode = NULL;
	printf("enter no. of nodes\n");
	scanf("%d",&n);
	create_dll(n);
	insert_dll(item);
	display();

}
void create_dll(int n)
{
	int i,data;
	struct node* tempnode;
	if(n>=1)
	{
		stnode=(struct node *)malloc(sizeof(struct node));
		if(stnode!=NULL)
		{
			printf("enter data into node 1:\n");
			scanf("%d",&data);
			stnode -> info = data;
			stnode -> backptr = NULL;
			stnode -> forwptr = NULL;
			ennode = stnode;
			for(i=2;i<=n;i++)
			{
				tempnode = (struct node *)malloc(sizeof(struct node));
				if(tempnode!= NULL)
				{
					printf("enter the input into %d node\n",i);
					scanf("%d",&data);
					tempnode -> info = data;
					tempnode -> backptr = ennode;
					tempnode -> forwptr = NULL;

					ennode -> forwptr = tempnode;
					ennode = tempnode;
				}
				else
				{
					printf("memory not found\n");
				}
			}
		}
		else
		{
			printf("memory not found\n");
		}

	}

}
void insert_dll(int item)
{
	int i;
	struct node * newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("enter the value of data to be inserted in dll\n");
	scanf("%d",&item);
	if(stnode==ennode==NULL)
	{
		newnode -> backptr = NULL;
		newnode -> forwptr = NULL;
		stnode = newnode;
		ennode = stnode;
		
	}
	else if(stnode == newnode)
	{
		newnode -> backptr = NULL;
		newnode -> forwptr = stnode;
		newnode -> backptr -> forwptr = newnode;
		
	}
	else
	{
		newnode -> backptr = stnode -> backptr;
		newnode -> forwptr = stnode;
		stnode -> backptr = newnode;
		newnode -> backptr -> forwptr = newnode;
		
	}
}
void display()
{
	struct node* tmp;
	int n=1;
	if(stnode==NULL)
	{
		printf("no list\n");
	}
	else
	{
		tmp = stnode;
		printf("data in the list is:\n");
		while(tmp!=NULL)
		{
			printf("%d",tmp -> info);
			n++;
			tmp = tmp -> forwptr;
		}
	}

}