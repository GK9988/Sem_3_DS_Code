#include <stdio.h>
#include <stdlib.h>
struct BST
{
    int data;
    struct
        BST *left;
    struct
        BST *right;
};
typedef struct BST NODE;
NODE *node;
NODE *createtree(NODE *node, int data)
{
    if (node == NULL)
    {
        NODE *temp;
        temp = (NODE *)malloc(sizeof(NODE));
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
        node->right = createtree(node->right, data);
    }
    return node;
}
void preorder(NODE *node)
{
    if (node != NULL)
    {
        printf("%d\t", node->data);
        preorder(node->left);
        preorder(node->right);
    }
}
void postOrder(NODE *node)
{
    if (node != NULL)
    {
        postOrder(node->left);
        postOrder(node->right);
        printf("%d\t", node->data);
    }
}
void inOrder(NODE *node)
{
    if (node != NULL)
    {
        inOrder(node->left);
        printf("%d\t", node->data);
        inOrder(node->right);
    }
}
void main()
{
    int data, ch, i, n;
    NODE *root = NULL;
    while (1)
    {
        printf("\n****Binary Search Tree Operation****\n");
        printf("\n1.Insertion in Binary search tree");
        printf("\n2. preorder");
        printf("\n3. inorder");
        printf("\n4. postorder");
        printf("\n5. Exit!!");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter N value:");
            scanf("%d", &n);
            printf("\nEnter the values to create BST like(6,9,5,2,8,15,24,14,7,8,5,2)\n");
            for (i = 0; i < n; i++)
            {
                scanf("%d", &data);
                root = createtree(root, data);
            }
            break;
        case 2:
            printf("\nPreorder Traversal:\n");
            preorder(root);
            break;
        case 3:
            printf("\nInorder Traversal:\n");
            inOrder(root);
            break;
        case 4:
            printf("\nPostorder Traversal:\n");
            postOrder(root);
            break;
        case 5:
            printf("Exit!!");
            exit(0);
        default:
            printf("\nINVALID CHOICE...TRY AGAIN!!");
            break;
        }
    }
}