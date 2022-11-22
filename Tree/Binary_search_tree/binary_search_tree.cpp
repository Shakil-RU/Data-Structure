#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
} *root;

typedef struct Node node;

node *getnode(int item)
{
    node *new_node = (node *)malloc(sizeof(node *));
    new_node->data = item;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

node *insert(node *root, int item)
{
    node *currentnode = root;
    node *new_node = (Node *) malloc(sizeof(Node));
    new_node->data = item;
    while (currentnode)
    {
        if(currentnode->data > item)
        {
            if(currentnode->left)
            {
                currentnode = currentnode->left;
            }
            else{
                currentnode->left = new_node;
                break;
            }
        }
        else if(currentnode->data < item)
        {
           if(currentnode->right)
           {
            currentnode = currentnode->right;
           }
           else{
            currentnode->right = new_node;
            break;
           }
        }
        else{
            return root;
        }
    }

return root? root:new_node;
}

void preorder(node *temp)
{
   if(temp == NULL) return;
   cout<<temp->data<<" ";
   preorder(temp->left);
   preorder(temp->right);
}

void inorder(node *temp)
{
    if(temp == NULL) return;
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}

void postorder(node *temp)
{
    if(temp == NULL) return ;
    postorder(temp->left);
    postorder(temp->right);
    cout<<temp->data<<" ";
}

int main()
{
    node * root = NULL;
    int key[] = {7, 6, 4, 5, 9, 8, 10, 25, 12, 9, 11, 2, 3, 1};
    for(int item: key)
    {
       root = insert(root,item);
    }
    cout<<root->data<<endl;
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    return 0;
}
