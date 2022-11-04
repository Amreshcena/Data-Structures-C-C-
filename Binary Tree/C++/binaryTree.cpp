#include <iostream>
using namespace std;
#include <stdio.h>
#include "QueueCpp.h"

class Tree
{
 Node *root;
public:
 Tree(){root=NULL;}
 void CreateTree();
 void Preorder(){Preorder(root);}
 void Preorder(Node *p);
 void Postorder(){Postorder(root);}
 void Postorder(Node *p);
 void Inorder(){Inorder(root);}
 void Inorder(Node *p);
 void Levelorder(Node *p);
 void Levelorder(){Levelorder(root);}
 
 int Height(){return Height(root);}
 int Height(Node *root);

int Count(){return Count(root);}
 int Count(Node *root);
int Count0(){return Count0(root);}
 int Count0(Node *root);
 int Count2(){return Count2(root);}
 int Count2(Node *root);
int Count12(){return Count12(root);}
 int Count12(Node *root);
int Count1(){return Count1(root);}
 int Count1(Node *root);
};
void Tree::CreateTree()
{
 Node *p,*t=NULL;
 int x;
 Queue q(100);
 cout<<"Enter root value : ";
 cin>>x;
 root=new Node;
 root->data=x;
 root->lchild=root->rchild=NULL;
 q.enqueue(root);
 while(!q.isEmpty())
 {
 p=q.dequeue();
 cout<<"Enter left child of  "<<p->data<<": ";
 cin>>x;
 if(x!=-1)
 {
 t=new Node;
 t->data=x;
 t->lchild=t->rchild=NULL;
 p->lchild=t;
 q.enqueue(t);
 }
 cout<<"Enter right child of  "<<p->data<<": ";
 cin>>x;
 if(x!=-1)
 {
 t=new Node;
 t->data=x;
 t->lchild=t->rchild=NULL;
 p->rchild=t;
 q.enqueue(t);
 }
 }
}
void Tree::Preorder(struct Node *p)
{
 if(p)
 {
 
 cout<<p->data<<" ";
 Preorder(p->lchild);
 Preorder(p->rchild);
 }
}
void Tree::Inorder(struct Node *p)
{
 if(p)
 {
 
 Inorder(p->lchild);
 cout<<p->data<<" ";
 Inorder(p->rchild);
 }
}
void Tree::Postorder(struct Node *p)
{
 if(p)
 {
 Postorder(p->lchild);
 Postorder(p->rchild);
 cout<<p->data<<" ";
 }
}
 void Tree::Levelorder(struct Node *root)
 {
 
 Queue q(100);
 cout<<root->data<<" ";
 q.enqueue(root);
 while(!q.isEmpty())
 {
 root=q.dequeue();
 if(root->lchild)
 {
 cout<<root->lchild->data<<" ";
 q.enqueue(root->lchild);
 }
 if(root->rchild)
 {
 cout<<root->rchild->data<<" ";
 q.enqueue(root->rchild);
   }
 }
}
int Tree::Height(struct Node *root)
{
 
 int x=0,y=0;
 if(root==0)
    return 0;
  x=Height(root->lchild); 
  y=Height(root->rchild);
 if(x>y)
 return x+1;
 else
 return y+1;
}
int Tree:: Count(struct Node *root){
  if(root!=NULL)
    return Count(root->lchild)+Count(root->rchild)+1;
  return 0;
}
int Tree::Count0(struct Node *root){
  int x=0,y=0;
  if(root!=NULL){
    x=Count0(root->lchild);
    y=Count0(root->rchild);
    
  if(root->lchild==NULL && root->rchild==NULL)
    return x+y+1;
  else
    return x+y;
    }return 0;
}
int Tree::Count2(struct Node *root){
  int x=0,y=0;
  if(root!=NULL){
    x=Count2(root->lchild);
    y=Count2(root->rchild);
    
  if(root->lchild!=NULL && root->rchild!=NULL)
    return x+y+1;
  else
    return x+y;
    }return 0;
}
int Tree::Count12(struct Node *root){
  int x=0,y=0;
  if(root!=NULL){
    x=Count12(root->lchild);
    y=Count12(root->rchild);
    
  if(root->lchild!=NULL || root->rchild!=NULL)
    return x+y+1;
  else
    return x+y;
    }return 0;
}
int Tree::Count1(struct Node *root){
  int x=0,y=0;
  if(root!=NULL){
    x=Count1(root->lchild);
    y=Count1(root->rchild);
    
    //(root->lchild!=NULL && root->rchild==NULL) || (root->lchild==NULL && root->rchild!=NULL)

  if(root->lchild!=NULL ^ root->rchild!=NULL)
    return x+y+1;
  else
    return x+y;
    }return 0;
}

int main() {
 Tree t;
 t.CreateTree();
 cout<<"Preorder : ";
 t.Preorder();
 cout<<endl;
 cout<<"Inorder : ";
 t.Inorder();
 cout<<endl;
 cout<<"Postorder : ";
 t.Postorder();
 cout<<endl; 
 cout<<"Levelorder : ";
 t.Levelorder();
 cout<<endl;
  cout<<"Height of Tree : "<<t.Height()<<endl;
  
  cout<<"Count of Tree : "<< t.Count()<<endl;

  cout<<"Count of Tree Deg-0 : "<< t.Count0()<<endl;
  cout<<"Count of Tree Deg-2 : "<< t.Count2()<<endl;
  cout<<"Count of Tree Deg-1 or 2 : "<< t.Count12()<<endl;

  cout<<"Count of Tree Deg-1 : "<< t.Count1()<<endl;
  cout<<endl;
  
 return 0;
  
  }




//OUTPUT ::
/*
Enter root value : 10
Enter left child of  10: 20
Enter right child of  10: 30
Enter left child of  20: 40
Enter right child of  20: 50
Enter left child of  30: 60
Enter right child of  30: 70
Enter left child of  40: -1
Enter right child of  40: -1
Enter left child of  50: -1
Enter right child of  50: -1
Enter left child of  60: -1
Enter right child of  60: -1
Enter left child of  70: -1
Enter right child of  70: -1
Preorder : 10 20 40 50 30 60 70 
Inorder : 40 20 50 10 60 30 70 
Postorder : 40 50 20 60 70 30 10 
Levelorder : 10 20 30 40 50 60 70

Height of Tree : 3
Count of Tree : 7

Count of Tree Deg-0 : 4
Count of Tree Deg-2 : 3
Count of Tree Deg-1 or 2 : 3
Count of Tree Deg-1 : 0

*/