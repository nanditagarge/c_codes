#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node* forwptr,* backptr;
}* stnode,* ennode;

void create_dll(int n);
void insert_dll(int n);
void display();
int main(){
	int n;
	stnode = NULL;
	ennode = NULL;
	printf("enter no. of nodes\n");
	scanf("%d",&n);
	create_dll(n);
	printf("the original list - \n");
	display();
	printf("\n");
	insert_dll(n);
	printf("the list after insertion - \n");
	display();
	printf("\n");
	return 0;
}
void create_dll(int n)
{
	int i,data;
	struct node* tempnode;
	if(n>=1)
	{
		stnode=(struct node *)malloc(sizeof(struct node));
		if(stnode!=NULL)
		{
			printf("enter the input into 1 node\n");
			scanf("%d",&data);
			stnode -> info = data;
			stnode -> backptr = NULL;
			stnode -> forwptr = NULL;
			ennode = stnode;
			for(i=2;i<=n;i++)
			{
				tempnode = (struct node *)malloc(sizeof(struct node));
				if(tempnode!= NULL)
				{
					printf("enter the input into %d node\n",i);
					scanf("%d",&data);
					tempnode -> info = data;
					tempnode -> backptr = ennode;
					tempnode -> forwptr = NULL;

					ennode -> forwptr = tempnode;
					ennode = tempnode;
				}
				else
				{
					printf("memory not found\n");
				}
			}
		}
		else
		{
			printf("memory not found\n");
		}

	}
	return;

}
void insert_dll(int n)
{
	int i, item, pos;
	struct node * newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("enter the position at which to insert the new element - an integer between 1 and %d",n+1);
	scanf("%d", &pos);
	printf("enter the value of data to be inserted in dll at the %d th position\n", pos);
	scanf("%d",&item);

	/* 1. allocate node */
	struct node* new_node = (struct node*)malloc(sizeof(struct node)); 

	/* 2. put in the data  */
	new_node->info = item; 
	//there are three points of insertion
	//case 1 .front of the dll (when pos=1)
	if (pos==1){
	
		/* 3. Make next of new node as head and previous as NULL */
		new_node->forwptr = stnode; 
		new_node->backptr = NULL; 
	
		/* 4. change prev of head node to new node */
		if (stnode != NULL) 
			stnode->backptr = new_node; 
	
		/* 5. move the head to point to the new node */
		stnode = new_node; 
	}
	
	//case 2. in the middle of the dll
	if (pos > 1 && pos < n+1){

		/* 3. find the node after which to insert the new node */
		struct node *prev_node=stnode;
		for (int i=1;i<pos-1;i++){
			prev_node = prev_node->forwptr;
		}
	
		//prev_node now refers to the node after which we want to insert the new node
		/* 4. Make next of new node as next of prev_node */
		new_node->forwptr = prev_node->forwptr; 
	
		/* 5. Make the next of prev_node as new_node */
		prev_node->forwptr = new_node; 
	
		/* 6. Make prev_node as previous of new_node */
		new_node->backptr = prev_node; 
	
		/* 7. Change previous of new_node's next node */
		if (new_node->forwptr != NULL) 
			new_node->forwptr->backptr = new_node; 

	}

	//case 3. end of the dll
	if(pos == n+1){

		/* 3. This new node is going to be the last node, so 
          make next of it as NULL*/
		new_node->forwptr = NULL; 
	
		/* 4. If the Linked List is empty, then make the new 
			node as head */
		if (stnode == NULL) { 
			new_node->backptr = NULL; 
			stnode = new_node; 
			return; 
		} 
		/* 5. else traverse the nodes till the end */
		struct node *temp=stnode;
		while(temp->forwptr != NULL)
			temp = temp->forwptr;

		//temp now refers to the last node
		/* 6. Change the next of last node */
		temp->forwptr = new_node; 
	
		/* 7. Make last node as previous of new node */
		new_node->backptr = temp; 
  
    }
	return;

}

void display()
{
	struct node* tmp;
	if(stnode==NULL)
	{
		printf("empty list\n");
	}
	else
	{
		tmp = stnode;
		printf("data in the list is:\n");
		while(tmp!=NULL)
		{
			printf("%d",tmp -> info);
			tmp = tmp -> forwptr;
		}
	}
	return;

}