#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node{
  struct Node *prev;
  int data;
  struct Node *next;
}*first=NULL;

void create(int A[],int n){
  struct Node *t,*last;
  int i;
  first=new Node;
  first->data=A[0];
  first->prev=first->next=NULL;
  last=first;

  for(i=0;i<n;i++){
    t=new Node;
    t->data=A[i];
    t->next=last->next;
    t->prev=last;
    last->next=t;
    last=t;
  }
}
void display(struct Node *p){
  while(p!=NULL){
    cout<<p->data<<" ";
    p=p->next;
  }
}
int count(struct Node *p){
  int l=0;
  while(p!=NULL){
    l++;
    p=p->next;
  }return l;
}
void insert(struct Node *p,int index,int x){
  struct Node *t;
  int i;
  if(index<0 || index>count(p))
    return;
  if(index==0){
    t=new Node;
    t->data=x;
    t->prev=NULL;
    t->next=first;
    first->prev=t;
    first=t;
  }else{
    for(i=0;i<index-1;i++)
      p=p->next;
    t=new Node;
    t->data=x;
    t->prev=t;
    t->next=p->next;
    if(p->next!=NULL)
      p->next->prev=t;
    p->next=t;
  }
}
int Delete(struct Node *p,int index){
  
  int x,i;
  if(index<0 || index>count(p))
    return -1;
  if(index==1){
    first=first->next;
    if(first!=NULL)first->prev=NULL;

    x=p->data;
    delete p;
  }else{
    for(i=0;i<index-1;i++)
      p=p->next;
    p->prev->next=p->next;
    if(p->next!=NULL)
      p->next->prev=p->prev;
    x=p->data;
    delete p;
  }return x;
}
void reverse(struct Node *p){
  struct Node *temp;
  while(p!=NULL){
    temp=p->next;
    p->next=p->prev;
    p->prev=temp;
    p=p->prev;
    if(p!=NULL && p->next==NULL)
      first=p;
  }
}
int main() {
  cout << "Doubly LinkedList : \n\n";
  
  int A[]={10,20,30,40,50};
  create(A,5);
  cout<<"Length is "<<count(first)<<" : ";
  cout<<"\nDisplay Doubly-LinkedList : ";
  display(first);
  //cout<<"\nAfter Insert : ";
  //insert(first,4,35);
  //display(first);
  cout<<"\nAfter Delete "<<Delete(first,2)<<" : ";
  display(first); 
  cout<<"\nAfter Reverse : ";
  reverse(first);
  display(first);

}
//OUTPUT :  
/*
Doubly LinkedList : 

Length is 6 : 
Display Doubly-LinkedList : 10 10 20 30 40 50 
After Delete 10 : 10 20 30 40 50 
After Reverse : 50 40 30 20 10
*/


