#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* link;

}* start;
void create_list(int data);
void count();
void main()
{
	int i,n,data;
	start==NULL;
	printf("enter the number of nodes\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter the data into %d node\n",i);
		scanf("%d",&data);
		create_list(data);
	}
	count();

}
create_list(data)
{
	struct node* temp,* q;
	temp=malloc(sizeof(struct node));
	temp -> info = data;
	temp -> link = NULL;
	if(start==NULL){
		start = temp;
	}
	else
	{
		q=start;
		while(q -> link!= NULL)
			q=q -> link;
		q -> link = temp;


	}
}
void count()
{
	struct node* q;
	int num;
	q=start;
	num=0;
	while(q!=NULL)
	{
		
		num=num+1;
		q =q -> link;
	}
	
	printf("%d",num);

}