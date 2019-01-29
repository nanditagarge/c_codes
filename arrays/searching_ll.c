#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* link;

}* start;
void create_list(int data);
void search(int item);
void main()
{
	int i,n,data,item;
	start==NULL;
	printf("the number of nodes\n");
	scanf("%d",&n);
	printf("enter the element to be searched\n");
	scanf("%d",&item);
	for(i=0;i<n;i++){
		printf("enter the data into %d node\n",i);
		scanf("%d",&data);
		create_list(data);
	}
	search(item);

}
create_list(int data)
{
	struct node* temp,* q;
	temp=malloc(sizeof(struct node));
	temp -> info=data;
	temp -> link=NULL;
	if(start==NULL){
		start = temp;
	}
	else
	{
		q=start;
		while(q -> link!=NULL)
			q=q -> link;
		q -> link=temp;

	}

}
void search(int item)
{
	struct node* q,* loc;
	
	q=start;
	loc=NULL;
	
	while(q!=NULL)
	{
		if(q -> info == item){
			loc=q;
		    printf("item found\n");
		}
			q=q -> link;

	}
}