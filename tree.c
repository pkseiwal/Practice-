#include<stdio.h>
#include<stdlib.h>
typedef struct tree {
	int data;
	struct tree *left;
	struct tree *right;
}Tree;
Tree *root=NULL;
void Create_Tree(Tree ** ,int );
void Display(Tree *);
void Inorder(Tree *);
int main()
{
	int n,i;
	for(i=0;i<=6;i++){
	scanf("%d",&n);
	Create_Tree(&root,n);
	}
	//Display(root);
	Inorder(root);
		

}
void Create_Tree(Tree **lroot,int dta)
{
	char choicei;
	
	if(!(*lroot)){
	printf("int memomry \n");
	*lroot=malloc(sizeof(Tree));
	
	(*lroot)->data=dta;
	(*lroot)->right=NULL;
	(*lroot)->left=NULL;
	}
	if(dta>(*lroot)->data){
	printf("right subtree\n");
	Create_Tree(&(*lroot)->right,dta);
	}
	if(dta<(*lroot)->data){
	printf("left subtree\n");
	Create_Tree(&(*lroot)->left,dta);
	}
	
}
void Display(Tree *lroot)
{
	if(lroot->left)
	Display(lroot->left);
	printf("tree %d\n",lroot->data); 
	if(lroot->right)
	Display(lroot->right); 
}
void Inorder(Tree *lroot)
{
	if(lroot!=NULL){
	Inorder(lroot->left);
	printf("%d\n",lroot->data);
	Inorder(lroot->right);
	}
}

