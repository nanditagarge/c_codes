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
		craete_cll(data);
		
	}
	dispaly();
}
void create_cll(int data)
{
	struct node* temp,* q;
	temp= (struct node *)malloc(sizeof(struct node));
	temp -> info = data;
	temp -> link =start;
	if(start==NULL)
		start = temp;
	else
	{
		q = start;
		while(q -> link !=NULL)
			q = q -> link;
		q -> link = temp;
	}
	

}
void display()
{
	struct node* q;
	q= start;
	while(q!= NULL)
	{
		printf("%d",q -> info );
		q= q-> link;
	}
}