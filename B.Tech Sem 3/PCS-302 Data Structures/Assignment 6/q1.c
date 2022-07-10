#include <stdio.h>
#include <stdlib.h>
typedef struct tree
{
    struct tree *left;
    int data;
    struct tree *right;
} node;
node *create(int num)
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    if (temp == NULL)
    {
        printf("Memory Full!\n");
    }
    else
    {
        temp->data = num;
        temp->left = NULL;
        temp->right = NULL;
    }
    return (temp);
}
void insert(node *root, node *temp)
{
    if (temp->data < root->data)
    {
        if (root->left == NULL)
        {
            root->left - temp;
        }
        else
        {
            insert(root->left, temp);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = temp;
        }
        else
        {
            insert(root->right, temp);
        }
    }
}
void countN(node *root, int *c)
{
    if (root != NULL)
    {
        *c += 1;
        countN(root->left, c);
        countN(root->right, c);
    }
}
void countL(node *root, int *c)
{
    if (root != NULL)
    {
        if (root->left == NULL && root->right == NULL)
        {
            *c += 1;
        }
        countL(root->left, c);
        countL(root->right, c);
    }
}
void countLe(node *root, int *c)
{
    if (root != NULL)
    {
        if (root->left != NULL && root->right == NULL)
        {
            *c += 1;
        }
        countLe(root->left, c);
        countLe(root->right, c);
    }
}
void countR(node *root, int *c)
{
    if (root != NULL)
    {
        if (root->left == NULL && root->right != NULL)
        {
            *c += 1;
        }
        countR(root->left, c);
        countR(root->right, c);
    }
}
int main()
{
    int no, mu = 1, res = 0;
    node *root = NULL, *temp;
    while (mu)
    {
        printf("\n\n\tmenu\n1. insert node\n2. count total no. of nodes\n3. count no. of leafs\n");
        printf("4. count nodes with left child only\n5. count nodes with right child only\n");
        printf("6. count nodes with data larger than root\n0. exit\ninput : ");
        scanf("%d", &mu);
        switch (mu)
        {
        case 0:
            printf("\n\nexiting...");
            break;
        case 1:
            printf("input data : ");
            scanf("%d", &no);
            temp = create(no);
            if (root == NULL)
            {
                root = temp;
            }
            else
            {
                insert(root, temp);
            }
            break;
        case 2:
            res = 0;
            countN(root, &res);
            printf("\n\ntotal no. of nodes are : %d", res);
            break;
        case 3:
            res = 0;
            countL(root, &res);
            printf("\n\ntotal no. of leaves are : %d", res);
            break;
        case 4:
            res = 0;
            countLe(root, &res);
            printf("\n\nno. of nodes having left childsonly : %d", res);
            break;
        case 5:
            res = 0;
            countR(root, &res);
            printf("\n\nno. of nodes having right childsonly : %d", res);
            break;
        case 6:
            res = 0;
            countN(root->right, &res);
            printf("\n\nno. of nodes having data greater than root : %d", res);
            break;
        default:
            printf("\n\nplease choose correct menu number!");
        }
    }
    return 0;
}
