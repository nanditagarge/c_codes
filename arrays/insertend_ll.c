#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* link;

}* start;
void create_list(int data);
void insertend(int x);
void display();
void main()
{
	int i,n,data,x;
	start==NULL;
	printf("enter the number of nodes\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter data into %d node\n",i);
		scanf("%d",&data);
		create_list(data);
	}

	pritnf("enter the value of data to be entered into the new node\n");
	scanf("%d",&x);
	
	insertend(x);
	display();


}
void create_list(data)
{
	struct node* q,* temp;
	temp=malloc(sizeof(struct node));
	temp -> info = data;
	temp -> link = NULL;
	if(start==NULL)
		start=temp;
	else
	{
		q=start;
		while(q!=NULL)
			q =q -> link;
		q -> link = temp;
	}


}
void insertend(x)
{
	struct node* q,* new;
	new=malloc(sizeof(struct node));
	if(new== NULL)
	{
		printf("overflow\n");
	}
	q -> link =new;
	new -> info = x;
	new -> link = NULL;

}
void display()
{
	struct node* new;
	new = start;
	while(new!=NULL)
	{
		printf("%d",new -> info);
		new = new -> link;
	}

	printf(".");

}