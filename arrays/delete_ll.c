#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* link;


}* start;
void create_list(int data);
void delete(int item);
void display();
void main()
{
	int i,n,data,item;
	start=NULL;
	printf("enter the number of nodes\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter the data into %d node",i);
		scanf("%d",&data);
		create_list(data);
	}

	printf("enter the info to be deleted\n");
	scanf("%d",&item);

	delete(item);
	display();
}
void create_list(int data)
{
	struct node* temp,* q;
	temp = malloc(sizeof(struct node));
	if(start==NULL)
		start=temp;
	else
	{
		q=start;
		while(q -> link != NULL)
			q= q -> link;
		q -> link = temp;
	}
}
void delete(int item)
{
	struct node* temp,* q;
	temp=malloc(sizeof(struct node));
	q=start;
	if(q -> link -> info == item){
		q -> link -> link == q -> link;

	}
	q= q -> link;
	
		
	
}
void display()
{
	struct node* q;
	q= start;
	while(q!=NULL){
		printf("%d",q -> info);
	    q = q -> link;
	}
}