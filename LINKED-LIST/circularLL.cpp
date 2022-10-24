#include <stdlib.h>
#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node *next;
} *head;
void create(int A[],int n){
  int i;
  struct Node *t,*last;
  head=new Node;
  head->data=A[0];
  head->next=head;
  last=head;

  for(i=1;i<n;i++){
    t=new Node;
    t->data=A[i];
    t->next=last->next;
    last->next=t;
    last=t;
  }
}
void display(struct Node *h){
  do{
    cout<<h->data<<" ";
    h=h->next;
  }while(h!=head);
}
void Rdisplay(struct Node *h){
  static int flag=0;
  if(h!=head || flag==0){
    flag=1;
    cout<<h->data<<" ";
    Rdisplay(h->next);
  }flag=0;
}
int count(struct Node *p){
  int len=0;
  do{
    len++;
    p=p->next;
  }while(p!=head);
  return len;
}
void Insert(struct Node *p,int index,int x){
  struct Node *t;
  int i;
  if(index<0 || index>count(p))
    return;

  if(index==NULL){
    t=new Node;
    t->data=x;
    if(head==NULL){
      head=t;
      head->next=head;
    }else{
      while(p->next!=head)p=p->next;
      p->next=t;
      t->next=head;
      head=t;
    }
  }else{
    for(i=0;i<index-1;i++)
      p=p->next;
    t=new Node;
    t->data=x;
    t->next=p->next;
    p->next=t;
  }
}
int Delete(struct Node *p,int index){
  struct Node *q;
  int i,x;
  if(index<0 || index>count(head))
    return -1;
  if(index==1){
    while(p->next!=head)
      p=p->next;
    x=head->data;
    if(head==p){
      delete p;
      head=NULL;
    }else{
      p->next=head->next;
      delete head;
      head=p->next;
    }
  }else{
    for(i=0;i<index-2;i++)
      p=p->next;
    q=p->next;
    p->next=q->next;
    x=q->data;
    delete q;
  }return x;
}

int main() { 
  cout << "Circular LinkedList-1 : \n" << endl; 
  int x;
  int A[]={1,2,3,4,5};
  create(A,5);
  cout<<"circular LinkedList : ";
  display(head);
  cout<<"\ncircular Recursion LinkedList : ";
  Rdisplay(head);
  cout<<"\nLength is : "<<count(head);
  Insert(head,5,5);
  cout<<"\nAfter Insert : ";
  display(head);
  cout<<"\nAfter Delete "<<Delete(head,5)<<" : ";
  display(head);
  }

//OUTPUT :  
/*
Circular LinkedList-1 : 

circular LinkedList : 1 2 3 4 5 
circular Recursion LinkedList : 1 2 3 4 5 
Length is : 5
After Insert : 1 2 3 4 5 5 
After Delete 5 : 1 2 3 4 5
*/

