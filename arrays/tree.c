#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* left;
	struct node* right;

} struct node;

struct node *createbst(struct node *root,int elem);
void inorder(struct node *root );


void main()
{
	struct node* root;
	int data,elem,n,i;

	root = NULL;
	printf("enter the number of nodes\n");
	scanf("%d",&n);
	printf("enter the data into nodes\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&elem);
		createbst(root,elem);
		inorder(root);
	}

	
	
}


struct node *createbst(struct node *root,int elem)
{
	int i;
	
	if(root==NULL)
	{
		root = (struct node *)malloc(sizeof(struct node));
		root -> left = root -> right = NULL;
		root -> data = elem;
		return root;
	}
	else
	{
		if(elem < root -> data)
		{
			root -> left = createbst(root -> left, elem);

		}
		else
		{
			if(elem > root -> data)
			{
				root -> right = createbst(root -> right, elem);
			}
		}

		return (root);

		
		

	}
	

}

void inorder(struct node *root)
{
	if(root!= NULL)
	{
		inorder(root -> left);
	    printf("%d",root -> data);
	    inorder(root -> left);

	}
}
	
	


