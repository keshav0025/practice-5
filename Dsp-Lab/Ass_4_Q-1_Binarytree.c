#include<stdio.h>
#include<stdlib.h>
 struct bin_tree{
 	int data;
 	struct bin_tree *left,*right;
 };
 typedef struct bin_tree node;
 
 void insert(node**tree, int val)
 {
	node *temp = NULL;
	if(!(*tree))
	{
		temp = (node*)malloc(sizeof(node));
		temp -> left = temp ->right = NULL;
		temp -> data = val;
		*tree = temp;
		return;
	}
	if(val < (*tree)->data)
	{
		insert(&(*tree)->left,val);
	}
	else if(val > (*tree)->data)
	{
		insert(&(*tree)->right,val);
	}
 }
 void height(node *tree)
 {
 	if(node *tree = NULL)
 	{
 		return 0;
	}
	else{
		int left = height((*tree)->left);
		int right = height((*tree)->right);
		if(left >right)
		{
			return left+1;
		}
		else{
			return right+1;
		}
	}
	 
 }
 // print pre_order;
 void print_preorder(node *tree)
 {
 	if(tree)
 	{
 		printf("%d",tree->data);
 		print_preorder(tree->left);
 		print_preorder(tree->right);
	 }
 }
 //print in_order;
 void print_inorder(node *tree)
 {
 	if(tree)
 	{
 		print_inorder(tree->left);
 		printf("%d",tree->data);
 		print_inorder(tree->right);
	 }
 }
 // print post_order;
 void print_postorder(node *tree)
 {
 	if(tree)
 	{
 		print_postorder(tree->left);
 		print_postorder(tree->right);
 		printf("%d",tree->data);
	 }
 }
 void main()
 {
 	node *root;
 	node *temp;
 	
 	root = NULL;
 	
 	insert(&root,23);
 	insert(&root,43);
 	insert(&root,33);
 	
 	printf("\n Display binary tree after insertion:");
 	
 	
 	printf("\n Display preorder:");
 	print_preorder(root);
 	
 	printf("\n Display inorder:");
 	print_inorder(root);
 	
 	printf("\n Display postorder:");
 	print_postorder(root);
 	
 }
