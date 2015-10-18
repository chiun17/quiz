/* FIXME: Implement! */
#include<stdio.h>
#include<stdlib.h>

typedef struct tree_node{
    int value;
    struct tree_node *left;
    struct tree_node *right;
} TreeNode;

void flatten(TreeNode *root){
    if(root==NULL)
        return;
    

    printf("%d\n",root->value);
    
    if(root->left)
        flatten(root->left);

    if(root->right)
        flatten(root->right);

    TreeNode *node_t;
    node_t= root->right;

    root->right = root->right;
    root->left = NULL;

    while(root->right!=NULL){
        root = root->right;
    }
    
    root->right = node_t;
}


TreeNode* testTree()
{
    TreeNode *node1,*node2,*node3,*node4,*node5,*node6;
    node1 = (TreeNode* )malloc(sizeof(TreeNode));
    node2 = (TreeNode* )malloc(sizeof(TreeNode));
    node3 = (TreeNode* )malloc(sizeof(TreeNode));
    node4 = (TreeNode* )malloc(sizeof(TreeNode));
    node5 = (TreeNode* )malloc(sizeof(TreeNode));
    node6 = (TreeNode* )malloc(sizeof(TreeNode));

    node1->left = node2;
    node1->right = node5;
    node2->left = node3;
    node2->right = node4;
    node5->right = node6;

    return node1;

}

int main()
        {
            flatten(testTree());
            


            return 0;
        }
