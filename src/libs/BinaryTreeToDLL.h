#ifndef BTREE_TO_DLL_H
#define BTREE_TO_DLL_H

#include<stdio.h> 
#include<stdlib.h> 

// A tree node
struct treeNode { 
	int data; 
	struct treeNode *left, *right; 
}; 
 

// Add a new item
struct treeNode *addNewNode(int data);
 
// In order of tree
void inorderTree(struct treeNode *root); 
 
// Convert left pointer (from BST) to previous pointer (to DLL)
void convertLeftPointer(struct treeNode *root);
 
// Convert right pointer (from BST) to next pointer (to DLL) 
struct treeNode *convertRightPointer(struct treeNode *root);
 
// Convert BST to DLL and Return the head of DLL
struct treeNode *convertBSTToDLL(struct treeNode *root);
 
// Show DLL (from LEFT to RIGHT) 
void showList(struct treeNode *root);

// Remove the fist item from DLL
int removeFirstItem();

// Remove the last item from DLL
int removeLastItem ();

// Remove specific item from DLL
int removeByIdx ();

#endif