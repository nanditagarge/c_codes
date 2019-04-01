#include <stdlib.h>
#include<stdio.h>
typedef struct tnode
{
    int data;
    struct tnode *right,*left;
}TNODE;
 
TNODE *CreateBST(TNODE *, int);
void Inorder(TNODE *);
void Preorder(TNODE *);
void Postorder(TNODE *);
int main()
{
    TNODE *root=NULL;        /* Main Program */
    int opn,elem,n,i;
    root=NULL;
    printf("enter number of nodes\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter data into %d node",i);
        scanf("%d",&elem);
        root=CreateBST(root,elem);
     }
            
    printf("\n BST Traversal in INORDER \n");
    Inorder(root); 
    printf("\n BST Traversal in PREORDER \n");
    Preorder(root); 
    printf("\n BST Traversal in POSTORDER \n");
    Postorder(root); 
        
}

TNODE *CreateBST(TNODE *root, int elem)
{
    if(root == NULL)
    {
        root=(TNODE *)malloc(sizeof(TNODE));
        root->left= root->right = NULL;
        root->data=elem;
        return root;
    }
    else
    {
        if( elem < root->data )
            root->left=CreateBST(root->left,elem);
        else
            if( elem > root->data )
                root->right=CreateBST(root->right,elem);
            else
                printf(" Duplicate Element !! Not Allowed !!!");
 
        return(root);
    }
}
void Inorder(TNODE *root)
{
    if( root != NULL)
    {
        Inorder(root->left);
        printf(" %d ",root->data);
        Inorder(root->right);
    }
}
 
void Preorder(TNODE *root)
{
    if( root != NULL)
    {
        printf(" %d ",root->data);
        Preorder(root->left);
        Preorder(root->right);
    }
}
 
void Postorder(TNODE *root)
{
    if( root != NULL)
    {
        Postorder(root->left);
        Postorder(root->right);
        printf(" %d ",root->data);
    }
}