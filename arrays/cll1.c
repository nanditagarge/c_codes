#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info; 
	struct node* link;

}* start;
void create_cll(int data);
void display();
void main()
{
	int i,n,data;
	start = NULL;
	printf("enter the no. of nodes\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("enter data into %d node",i);
		scanf("%d",&data);
		create_cll(data);
		
	}
	display();
}
void create_cll(int data)
{
	struct node* temp,* q,* start;
	temp= (struct node *)malloc(sizeof(struct node));
	temp = start;
	q -> info = data;
	q -> link = start;

	if(start!= NULL)
	{
		while(temp -> link != start)
			temp = temp -> link;
		temp -> link = q;
	}
	else
	{
		q -> link = q;

	}
	start = q;

}
void display()
{
	struct node* temp;
	temp = start;
	if(start!= NULL)
	{
		do
		{
			printf("%d",temp -> info );
		    temp= temp-> link;
		}
		while(temp!=start);
	}
}