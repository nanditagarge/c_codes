#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* link;

}* start;


void create_list(int data[], int n){

	struct node *q, *temp;
	start = (struct node *)malloc(sizeof(struct node));

	if(start == NULL){
		printf("unable to allocate memory! bad bad computer!");
	}

	else{
		start -> info = data[0];
		start -> link = NULL;

		temp = start;
	
		for(int i=1; i<n; i++){
			q = (struct node *)malloc(sizeof(struct node));
			if(q == NULL){
				printf("Unable to allocate memory.");
				break;
			}

			else{
				q -> info = data[i];
				q -> link = NULL;

				temp -> link = q;
				temp = temp -> link;
			}
		}
	}
}

void insertend(int x){

	struct node *temp, *new;
	new = (struct node*)malloc(sizeof(struct node));

	if(new == NULL){
		printf("unable to allocate memory.\n");
	}
	else{
		new -> info = x;
		new -> link = NULL;
		if(start == NULL) start=new;
		else{
			temp = start;
			while(temp -> link != NULL){
				temp = temp -> link;
			}
			temp -> link = new;		
		}
	}
}

void display(){

	struct node *q;
	if(start == NULL){
		printf("Boo! list is empty :(");
	}

	else{
		q = start;
		while(q!=NULL){
			printf("%d\t",q-> info);
			q = q -> link;
		}
	}
	printf(".\n");
}

int main()
{
	int i,n,x;
	start=NULL;
	printf("enter the number of nodes\n");
	scanf("%d",&n);
	int data[n];
	for(i=0;i<n;i++){
		printf("enter data into %d node\n",i);
		scanf("%d",&data[i]);
	}
	create_list(data,n);
	printf("the list is created thusly :P\n");
	display();

	printf("enter the value of data to be entered into the new node\n");
	scanf("%d",&x);
	
	insertend(x);
	printf("the element has been inserted at the end thusly! wohoo! :D\n");
	
	display();
	return 0;

}