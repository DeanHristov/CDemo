#include "BinaryTreeToDLL.h"

// Add a new item
struct treeNode *addNewNode(int data) { 
	struct treeNode *treeNode = (struct treeNode *)malloc(sizeof(struct treeNode)); 
	treeNode->data = data; 
	treeNode->left = treeNode->right = NULL;

	return(treeNode); 
} 


// In order of tree
void inorderTree(struct treeNode *root) { 
	if (root != NULL) { 
		inorderTree(root->left);

		printf("\t%d",root->data); 
		
		inorderTree(root->right); 
	} 
} 


// Convert left pointer (from BST) to previous pointer (to DLL)
void convertLeftPointer(struct treeNode *root) { 
	static struct treeNode *pre = NULL; 

	if (root != NULL) { 
		convertLeftPointer(root->left); 
		root->left = pre; 
		pre = root; 
		convertLeftPointer(root->right); 
	} 
} 
 
// Convert right pointer (from BST) to next pointer (to DLL) 
struct treeNode *convertRightPointer(struct treeNode *root) { 
	struct treeNode *prev = NULL; 
 
	while (root && root->right != NULL) root = root->right; 
 
	while (root && root->left != NULL) { 
		prev = root; 
		root = root->left; 
		root->right = prev; 
	} 
 
	return (root); 
} 
 
 // Convert BST to DLL and Return the head of DLL
struct treeNode *convertBSTToDLL(struct treeNode *root) { 
	convertLeftPointer(root); 

	 
	return convertRightPointer(root); 
} 

 
// Show DLL (from LEFT to RIGHT) 
void showList(struct treeNode *root) { 
	while (root != NULL) { 
		printf("\t%d", root->data); 
		root = root->right; 
	} 
}

int removeFirstItem() {
	// TODO ...
}

int removeLastItem () {
	// TODO ...
}

int removeByIdx () {
	// TODO ...
}