#include<iostream>
using namespace std;
struct node{
    int data;
    struct node*left,*right;
};
typedef struct node node;
node* createNode();
void display(node*);
int main()
{
 node* root;
 root=createNode();
 display(root);
}

node* createNode()
{
    int x;
    std::cout<<"Enter the data of the root node: ";
    std::cin>>x;
    if(x==-1)
    {
        return 0;
    }
    node* newnode=new node;
    newnode->data=x;
    std::cout<<"Enter the left child of "<<x<<"\n";
    newnode->left=createNode();
    std::cout<<"Enter the right child of "<<x<<"\n";
    newnode->right=createNode();
    return newnode;
}

void display(node* temp)
{
    if(temp!=NULL)
    {
        cout<<temp->data<<"\n";
        display(temp->left);
        display(temp->right);
    }
          
}