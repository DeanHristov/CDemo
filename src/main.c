#include "libs/BinaryTreeToDLL.h"
 
int main(void) {

	// Create the tree step by step
	struct treeNode *root = addNewNode(10); 
	root->left	      = addNewNode(12); 
	root->right	      = addNewNode(15); 
	root->left->left  = addNewNode(25); 
	root->left->right = addNewNode(30); 
	root->right->left = addNewNode(36); 
	root->right->right = addNewNode(37); 

	printf("\n\t\tInorder tree\n\n"); 
	inorderTree(root); 

	struct treeNode *head = convertBSTToDLL(root); 

	printf("\n\n\t\tDynamic linked list (DLL)\n\n"); 

	showList(head); 
   
   printf("\n\n");

	return 0; 
} 
