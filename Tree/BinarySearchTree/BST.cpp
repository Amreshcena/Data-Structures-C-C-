#include <iostream>
using namespace std;

struct Node{
    struct Node *lchild;
    int data;
    struct Node *rchild;
}*root=NULL;

void Insert(int key){
  struct Node *t=root;
  struct Node *r,*p;

  if(root==NULL){
    p=new Node;
    p->data=key;
    p->lchild=p->rchild=NULL;
    root=p;
    return;
  }
  while(t!=NULL){
    r=t;
    if(key==t->data)
      return;
    else if(key<t->data)
      t=t->lchild;
    else if(key>t->data)
      t=t->rchild;
  }
    p=new Node;
    p->data=key;
    p->lchild=p->rchild=NULL;
  if(key<r->data)
    r->lchild=p;
  else
    r->rchild=p;
}

struct Node * Search(int key){
  struct Node *t=root;

  while(t!=NULL){
    if(key==t->data)
      return t;
    else if(key<t->data)
      t=t->lchild;
    else
      t=t->rchild;
  }
  return 0;
}

int Height(Node *p) {
    int x;
    int y;
    if (p == nullptr){
        return 0;
    }
    x = Height(p->lchild);
    y = Height(p->rchild);
    return x > y ? x + 1 : y + 1;
}
 
Node* InPre(Node *p) {
    while (p && p->rchild != nullptr){
        p = p->rchild;
    }
    return p;
}
 
Node* InSucc(Node *p) {
    while (p && p->lchild != nullptr){
        p = p->lchild;
    }
    return p;
}

Node* Delete(Node *p, int key) {
    Node* q;
 
    if (p == nullptr){
        return nullptr;
    }
 
    if (p->lchild == nullptr && p->rchild == nullptr){
        if (p == root){
            root = nullptr;
        }
        delete p;
        return nullptr;
    }
 
    if (key < p->data){
        p->lchild = Delete(p->lchild, key);
    } else if (key > p->data){
        p->rchild = Delete(p->rchild, key);
    } else {
        if (Height(p->lchild) > Height(p->rchild)){
            q = InPre(p->lchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild, q->data);
        } else {
            q = InSucc(p->rchild);
            p->data = q->data;
            p->rchild = Delete(p->rchild, q->data);
        }
    }
    return p;
}
 


void Inorder(struct Node *p){
  if(p){
    Inorder(p->lchild);
    cout<<p->data<<" ";
    Inorder(p->rchild);
  }
}

int main() {
  cout << "Binary Search Tree : \n";
  struct Node *temp;
   
  Insert(50);
  Insert(10);
  Insert(40);
  Insert(20);
  Insert(30);
  Delete(root,50);
  cout<<"\nInorder BST : ";
  Inorder(root);
  cout<<endl;
  temp=Search(9);
  if(temp!=NULL)
    cout<<"Element is found : "<<temp->data;
  else
    cout<<"Elemet is Not found !";
  
}

//OUTPUT::
/*
Binary Search Tree : 

Inorder BST : 10 20 30 40 
Elemet is Not found !
*/