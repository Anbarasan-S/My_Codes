#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*left,*right;
};
typedef struct node node;
struct queue
{
    struct queue*next;
};
typedef struct queue queue;
queue*front=NULL,*rear=NULL;
void createTree();
int enqueue(node*);
node* dequeue();
void display();
int main()
{
  
}
int enqueue(int x)
{
    queue *newnode=(queue*)malloc(sizeof(queue));
    if(front==NULL)
    {
        front=newnode;
        rear=newnode;
        front->next=NULL;
    }
    else
    {
        rear->next=newnode;
        rear=rear->next;
    }
    return 0;
}
node* dequeue()
{
    if(front==rear)
    {
        queue*p=front;
        front=NULL;
        rear=NULL;
        return p;
    }
    else
    {
        queue*p=front;
        front=front->next;
        return p;
    }
}
void display()
{
   queue*temp=front;
   while (temp!=NULL)
   {
       printf("%d ",temp->data);
       temp=temp->next;
   }
}
void createTree()
{
    int x;
    printf("Enter the data: ");
    scanf("%d",&x);
    node*newnode=(node*)malloc(sizeof(node));
    newnode->data=x;
    newnode->left=NULL;
    newnode->right=NULL;
    enqueue(newnode);
    node*p
}