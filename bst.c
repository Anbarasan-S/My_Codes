#include<stdio.h>
#include<stdlib.h>
struct bst
{
    struct bst*left,*right;
    int data;
};
typedef struct bst BST;
BST*root=NULL;
void insert(BST *t,int key)
{
 BST*r=NULL;
 while(t!=NULL)
 {
     r=t;
     if(t->data==key)
     {
         return;
     }
     else if(t->data>key)
     {
      t=t->left;
     }
     else
     {
       t=t->right;
     }
 }
 BST*new_node=(BST*)malloc(sizeof(BST));
 new_node->data=key;
 new_node->left=NULL;
 new_node->right=NULL;
 if(r==NULL)
 {
     root=new_node;
 }
 else if(r->data>key)
 {
   r->left=new_node;
 }
 else
 {
    r->right=new_node;
 }
}
void display(BST*t)
{
  if(t==NULL)
  {
      return;
  }
   printf("%d\n",t->data);
   display(t->left);
   display(t->right);
}
int main()
{
  insert(root,23);
  insert(root,43);
  insert(root,56);
  insert(root,13);
  insert(root,83);
  insert(root,10);
  display(root);
}