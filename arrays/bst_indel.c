#include<stdio.h>
#include<stdlib.h>

typedef struct tnode
{
	int data;
	struct node *left, *right;
	
}TNODE;

TNODE *create_bst( TNODE *,int);
void insert(TNODE *,TNODE *);
void inorder(TNODE *);
int main()
{
	TNODE *root=NULL, *temp;
	int elem,n ,i,new;
	root=NULL;
	printf("enter number of nodes\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter data into %d node",i);
		scanf("%d",&elem);
		root = create_bst(root,elem);
	}
	printf("enter data into temp\n");
	scanf("%d",&elem);

	insert(root,temp);

	printf("bst travel in inorder\n");
	inorder(root);


}

TNODE *create_bst(TNODE *root,int elem)
{
	if(root==NULL)
	{
		root=(TNODE *)malloc(sizeof(TNODE));
		root -> left = root -> right = NULL;
		root -> data = elem;
		return root;


	}
	else
	{
		if(elem< root -> data)
		{
			root -> left = create_bst(root -> left,elem);
		}
		else if(elem> root -> data)
		{
			root -> right = create_bst(root -> right,elem);
		}
		else
			printf("duplicate element not allowed\n");
	}

	return(root);
}

void insert(TNODE *root,TNODE *temp)
{
	int elem;
	temp=(TNODE *)malloc(sizeof(TNODE));
	temp -> left = NULL;
	temp -> right = NULL;
	temp -> data = elem;

	while(temp!=NULL)
	{
		if(elem <root-> data)
		{
			if(root -> left!= NULL)
			{
				insert(root -> left,temp);
			}
			else
			{
				root -> left = temp;
			}
		}

		else(elem > root -> data);
		{
			if(root -> right!=NULL)
			{
				insert(root -> right,temp);
			}
	
			else
			{
				root -> right = temp;
			}

		}
	}	

}

void inorder(TNODE *root)
{
	if(root!= NULL)
	{
		inorder(root -> left);
	    printf("%d",root -> data );
	    inorder(root -> right);

	}
	
}

