#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* link;

} * start;
void create_list(int data);
void display();
void main()
{
	int i,n,data;
	start==NULL;
	printf("enter the number of nodes\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter data into %d node\n",i);
		scanf("%d",&data);
		create_list(data);
	}
	display();
}
create_list(int data)
{
	struct node* temp,* q;
	temp=malloc(sizeof(struct node));
	temp -> info = data;
	temp -> link = NULL;
	if(start==NULL)
		start = temp;
	else
	{
		q=start;
		while(q -> link!=NULL)
			q=q -> link;
		q -> link=temp;
	}
}
void display()
{
	struct node* q;
	q =start;
	if(start==NULL)
	{
		printf("no node found\n");
		return;
		
	}
	while(q!=NULL)
	{
		printf("%d",q -> info);
		q=q-> link;
	}
}