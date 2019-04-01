#include<stdio.h>
#include<stdlib.h>
 
typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
} node;
 
node *create()
{
	node *p;
	int x;
	int i,j;
	printf("Enter data:");
	scanf("%d",&x);
	
	if(x==0)
		return NULL;
	
	p=(node*)malloc(sizeof(node));
	p->data=x;

	printf("enter left child of %d\n",x);
	p -> left = create();
	printf("enter right child of %d\n",x);
	p -> right = create();
	return p;
}
 
void preorder(node *t)		
{
	if(t!=NULL)
	{
		printf("\n%d",t->data);	
		preorder(t->left);		
		preorder(t->right);		
	}
}

void inorder(node *t)
{
	if(t!=NULL)
	{
		inorder(t->left);
		printf("%d",t-> data );
		inorder(t->right);
	}
}

void postorder(node *t)
{
	if(t!=NULL)
	{
		postorder(t->left);
		postorder(t->right);
		printf("%d",t->data);
	}
}
 
void main()
{	
	node *root;
	root=create();
	printf("\nThe preorder traversal of tree is:\n");
	preorder(root);
	printf("the inorder traversal of tree is \n");
	inorder(root);
	printf("the postorder traversal of tree is \n");
	postorder(root);
    return(0);
}