#include <stdio.h> 
#include<stdlib.h> 
struct BST { 
 int data; 
 struct BST *left; 
 struct BST *right; 
}; 
typedef struct BST NODE; 
NODE *node; 
NODE* createtree(NODE *node, int data) 
{ 
 
if (node == NULL) 
{ 
NODE *temp; 
temp= (NODE*)malloc(sizeof(NODE)); 
temp->data = data; 
temp->left = temp->right = NULL; 
return temp; 
} 
if (data < (node->data)) 
{ 
node->left = createtree(node->left, data); 
} 
else if (data > node->data) 
{ 
node -> right = createtree(node->right, data); 
} 
return node; 
} 
void pre_order(NODE *node) 
{ 
if(node != NULL) 
{ 
printf("%d\t", node->data); 
pre_order(node->left); 
pre_order(node->right); 
} 
} 
void main() 
{ 
int data, ch, i, n; 
NODE *root=NULL; 
while (1) 
{ 
printf("\n1.Insertion in Binary Search Tree"); 
 printf("\n2.Preorder"); 
 printf("\n3.Exit"); 
 printf("\nEnter your choice: "); 
 scanf("%d", &ch); 
 switch (ch) 
 { 
 case 1: printf("\nEnter N value: " ); 
 scanf("%d", &n); 
 printf("\nEnter the values to create BST like(6,9,5,2,8,15,24,14,7,8,5,2)\n"); 
 for(i=0; i<n; i++) 
 { 
 scanf("%d", &data); 
 root=createtree(root, data); 
 } 
 break; 
 case 2: printf("\nPreorder Traversal: \n"); 
 pre_order(root); 
 break; 
 case 3: 
 exit(0); 
 default:printf("\nWrong option"); 
 break; 
 } 
} 
} 
