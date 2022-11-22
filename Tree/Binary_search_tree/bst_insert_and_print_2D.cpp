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
    node *temp = (node *)malloc(sizeof(node *));
    temp->data = item;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

node *insert_bst(node *root, int item)
{
   node *currentnode = root;
   node *temp = getnode(item);
   int loc = 1;
   while(currentnode != NULL)
   {
     if(currentnode->data > temp->data)
     {
        if(currentnode->left != NULL)
        {
            currentnode = currentnode->left;
            loc = 2*loc;
        }
        else
        {
            currentnode->left = temp;
            break;
        }
     }
     else if(currentnode->data < temp->data )
     {
        if(currentnode->right != NULL)
        {
            currentnode = currentnode->right;
            loc = 2*loc + 1;
        }
        else{
            currentnode->right = temp;
            break;
        }
     }
     else{
        cout<<"Found at loc: "<<loc<<endl;
        break;
     }
   }
   return root? root: temp;
}

void print_2D_tree(node *root,int space)
{ 
    if(root == NULL)return;
    space = space +10;
    print_2D_tree(root->right, space);
    cout<<endl;
    for(int i = 10; i<space; i++)
    {
        cout<<" ";
    }
     cout<<root->data<<endl;
   
   print_2D_tree(root->left, space);
}


void inorder(node *root)
{
  if(root == NULL)return ;
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);

}


int main()
{
   node *root = NULL;
   while(true) {
    int x;
    cout<<"Enter the data of nodes: "<<endl;
    cin>>x;
    if(x == -1) break;
    root = insert_bst(root, x);
    print_2D_tree(root, 10);
   }
   cout<<endl<<"inorder: "<<endl;
   inorder(root);
    return 0;
}
