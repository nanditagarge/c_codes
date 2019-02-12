#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* link;


}* start;
void craete_list(int data);
void insertbeforeloc(int item, int loc);
void display();
void main()
{
	int n,data,i,item,loc;
	start=NULL;
	printf("enter the number of nodes\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter data into %d node",i);
		scanf("%d",&data);
		create_list(data);


	}

	printf("enter the data of the after node of which the node has to be created\n");
	scanf("%d",&loc);

	printf("enter the data into the new node\n");
	scanf("%d",&item);

    insertbeforeloc(item,loc);
    display();

}
void create_list(int data)
{
	struct node* temp,* q;
	q=start;
	temp = malloc(sizeof(struct node));
	temp -> info = data;
	temp -> link = NULL;
	if(start==NULL)
		start= temp;
	else
	{
		q=start;
		while(q -> link != NULL)
			q=q -> link;
		q -> link = temp;


	}

}
void insertbeforeloc(int item,int loc)
{
	struct node* temp,* q;
	temp = malloc(sizeof(struct node));
		q= start;
		temp ->info=item;
		if(start->info==loc)
		{
			temp->link=start;
			start=temp;
			return;

		}
		while(q != NULL)
		{
			if(q -> link -> info == loc)
			{
				temp-> link = q -> link;
				q->link=temp;
				return;
				


			}
			q = q -> link;
		}
	printf("%d element not found\n",loc);
}
void display()
{
	struct node* q;
	q= start;
	while(q!= NULL){
		printf("%d",q -> info);
	    q = q -> link;
	}

}