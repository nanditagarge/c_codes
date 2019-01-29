#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* link;

}* start;
void create_list(int data);
void insertbegin(int x);
void display();
void main()
{
	int i,n,data,x;
	start==NULL;
	printf("enter the number of nodes\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter the data of %d node\n",i);
		scanf("%d",&data);
		create_list(data);

	}
	printf("enter the value of data in the new node\n");
	scanf("%d",&x);

	insertbegin(x);
	display();
}
void create_list(int data)
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
	    q -> link = temp;
		
	}
}
void insertbegin(int x)
{
	struct node* q,* new,* avail;
	new=malloc(sizeof(struct node));
	if(new==NULL){
		printf("overflow");
	}
	new -> info = x;
	new -> link = start;
	start=new;



}
void display()
{
	struct node* new;
	new=start;
	while(new!=NULL)
	{
		printf("%d",new -> info);
		new = new -> link;
	}
	
	printf(".");
	
}