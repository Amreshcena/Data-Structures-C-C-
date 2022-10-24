#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first=NULL,*second=NULL,*third=NULL,*second1=NULL;

void create(int A[],int n){
  int i;
  struct Node *t,*last;
  first=(struct Node *)malloc(sizeof(struct Node));
  first->data=A[0];
  first->next=NULL;
  last=first;
  for(i=1;i<n;i++){
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
  }}
void create1(int A[],int n){
  int i;
  struct Node *t,*last;
  second=(struct Node *)malloc(sizeof(struct Node));
  second->data=A[0];
  second->next=NULL;
  last=second;
  for(i=1;i<n;i++){
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
  }}
void create2(int A[],int n){
  int i;
  struct Node *t,*last;
  second1=(struct Node *)malloc(sizeof(struct Node));
  second1->data=A[0];
  second1->next=NULL;
  last=second1;
  for(i=1;i<n;i++){
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
  }}
void display(struct Node *p){
  while(p!=NULL){
    cout<<p->data<<" ";
    p=p->next;
  }
}
void Rdisplay(struct Node *p){
  if(p!=NULL){
    cout<<p->data<<" ";
    Rdisplay(p->next);
    cout<<p->data<<" ";
  }
}
int count(struct Node *p){
  int l=0;
  while(p!=NULL){
    l++;
    p=p->next;
  }return l;
}
int Rcount(struct Node *p){
  if(p!=NULL)
    return Rcount(p->next)+1;
  else
    return 0;
}
int sum(struct Node *p){
  int s=0;
  while(p!=NULL){
    s+=p->data;
    p=p->next;
  }return s;
}
int Rsum(struct Node *p){
  if(p!=NULL)
    return Rsum(p->next)+p->data;
  return 0;
}
int max(struct Node *p){
  int m=INT32_MIN;
  while(p!=NULL){
    if(m<p->data)
      m=p->data;
    p=p->next;
  }return m;
}
int Rmax(struct Node *p){
  int m=0;
  if(p==0)
    return 0;
  else{
     m=Rmax(p->next);
      if(m>p->data)
       return m;
      else return p->data;
     }
  }
struct Node * Lsearch(struct Node *p,int key){
  while(p!=NULL){
    if(key==p->data)
      return p;
    p=p->next;
  }return NULL;
}
struct Node * Rsearch(struct Node *p,int key){
  if(p==NULL)
    return NULL;
  if(key==p->data)
    return p;
  else
    return Rsearch(p->next,key);
}
struct Node * Hsearch(struct Node *p,int key){
  struct Node *q;
  while(p!=NULL){
    if(key==p->data){
      q->next=p->next;
      p->next=first;
      first=p;
      return p;
    }
    q=p;
    p=p->next;
  }return NULL;
}
void insert(struct Node *p,int index,int x){
  struct Node *t;
  int i;
  if(index<0 || index>count(p))
    return;
  t=(struct Node *)malloc(sizeof(struct Node));
  t->data=x;
  if(index==0){
    t->next=first;
    first=t;
  }else{
    for(i=0;i<index-1;i++){
      p=p->next;
    }
    t->next=p->next;
    p->next=t;
  }
}
void sortedInsert(struct Node *p,int x){
  struct Node *t,*q=NULL;
  t=(struct Node*)malloc(sizeof(struct Node));
  t->data=x;
  t->next=NULL;
  
  if(first==NULL)
    first=t;
  else{
    while(p && p->data<x){
      q=p;
      p=p->next;
    }if(p==first){
      t->next=first;
      first=t;
      }
      else{
      t->next=q->next;
      q->next=t; 
    }}
}
int Delete(struct Node *p,int index){
  struct Node *q;
  int x=-1,i;
  if(index<1 || index>count(p)){
    return x;
  }
  if(index==1){
    p=first;
    x=first->data;
    first=first->next;
    delete p;
    return x;
    }else{
    for(i=0;i<index-1;i++){
      q=p;
      p=p->next;
    }
    q->next=p->next;
    x=p->data;
    delete p;
    return x;
  }
}
int isSorted(struct Node *p){
  int x=-65536;
  while(p!=NULL){
    if(x>p->data)
      return 0;
    x=p->data;
    p=p->next;
  }return 1; 
}
void Rduplicates(struct Node *p){
  struct Node *q=p->next;
  while(q!=NULL){
    if(p->data!=q->data){
      p=q;
      q=q->next;
    }else{
      p->next=q->next;
      delete q;
      q=p->next;
    }
  }
}
void reverse1(struct Node *p){
  int *A,i=0;
  struct Node *q=p;
  A=(int *)malloc(sizeof(int)*count(p));
  while(q!=NULL){
    A[i]=q->data;
    q=q->next;
    i++;
  }
  i--;
  q=p;
  while(q!=NULL){
    q->data=A[i];
    q=q->next;
    i--;
  } 
}
void reverse2(struct Node *p){
  struct Node *q,*r;
  while(p!=NULL){
    r=q;
    q=p;
    p=p->next;
    q->next=r;
  }first=q; 
}
void Rreverse3(struct Node *q,struct Node *p){
  if(p!=NULL){
    Rreverse3(p,p->next);
    p->next=q;
  }else{
    first=q;
  }
}
void concadination(struct Node *p,struct Node *q){
  third=p;
  while(p->next!=NULL)
    p=p->next;
  p->next=q;
}
void merge(struct Node *p,struct Node *q){
  struct Node *last;
  if(p->data < q->data){
    third=last=p;
    p=p->next;
    third->next=NULL;
  }else{
    third=last=q;
    q=q->next;
    third->next=NULL;
  }
  while(p!=NULL && q!=NULL){
    if(p->data < q->data){
      last->next=p;
      last=p;
      p=p->next;
      last->next=NULL;
    }else{
      last->next=q;
      last=q;
      q=q->next;
      last->next=NULL;
    }}
  if(p!=NULL)last->next=p;
  if(q!=NULL)last->next=q;
}
int isLoop(struct Node *f)
{
 struct Node *p,*q;
 p=q=f;
 
 do
 {
 p=p->next;
 q=q->next;
 q=q?q->next:q;
 }while(p && q && p!=q);
 if(p==q)
 return 1;
 else
 return 0;
}

int main() {
  cout << "Linked List : "<<endl;
  int A[]={10,20,30,4,5};
  create(A,5);
  cout<<"Display LinkedList : ";
  display(first);
  cout<<"\nRecursion To Display LinkedList : ";
  Rdisplay(first);

  cout<<"\nLength is : "<<count(first)<<" ";
  cout<<"\nRecursive Length is : "<<Rcount(first)<<" ";
  cout<<"\nSum is : "<<sum(first)<<" ";
  cout<<"\nRecursive Sum is : "<<Rsum(first)<<" ";
  cout<<"\nMax is : "<<max(first)<<" ";
  cout<<"\nRecursive Max is : "<<Rmax(first)<<" ";

  struct Node *search;
  search=Lsearch(first,3);
  if(search!=NULL)
    cout<<"\nKey is found : "<<search->data<<" ";
  else
    cout<<"\nKey is not found!"<<endl;

  search=Rsearch(first,7);
  if(search!=NULL)
    cout<<"\nKey is found : "<<search->data<<" ";
  else
    cout<<"\nKey is not found!"<<endl;

  search=Hsearch(first,5);
  search=Hsearch(first,4);
  if(search!=NULL)
    cout<<"\nKey is found : "<<search->data<<endl;
  else
    cout<<"\nKey is not found!"<<endl;
  cout<<"After move to Head Node : ";
  display(first);
  
  cout<<"\n\nBefore Insert value : ";
  display(first);
  
  cout<<"\nAfter Insert value : ";
  insert(first,0,2);
  insert(first,1,3);
  display(first);

  cout<<"\nInsert in sorted LinkedList : ";
  sortedInsert(first,1); //insert in first
  sortedInsert(first,6);   //insert in middle 
  sortedInsert(first,40);   //insert in last
  display(first);
  cout<<"\nAfter Insert Length is : "<<count(first)<<" ";
   
  printf("\n\nDeleted Element %d : \n",Delete(first,6));
  display(first);

  if(isSorted(first))
    cout<<"\nSorted LinkedList : ";
  else
    cout<<"\nUnsorted LinkedList : ";
  display(first);
  
  cout<<"\n\n";
  insert(first,2,2);
  insert(first,6,5);
  insert(first,7,5);
  cout<<"Add Duplicates : "; //for remove duplicates purpose
  display(first);

  Rduplicates(first);
  cout<<"\nAfter remove Duplicates : ";
  display(first);

  cout<<"\nReverse1 : ";
  reverse1(first);
  display(first);
  cout<<"\nReverse2 : ";   //Best method for reverse
  reverse2(first);
  display(first);
  cout<<"\nRcursive Reverse3 : ";
  Rreverse3(NULL,first);
  display(first);
  reverse2(first);  

  int B[]={1,3,7,8,10};
  create1(B,5);
  int C[]={2,4,5,6,9};
  create2(C,5);
  
   //concadination(first,second);
   //cout<<"Concadination : ";
   //display(third);
  
  merge(second,second1);
  cout<<"\n\nMerging 2-LinkedList : ";
  display(third);  

  struct Node *t1,*t2;
  t1=first->next->next;
  t2=first->next->next->next->next;
  t2->next=t1;

  printf("\nISLoop : %d\n",isLoop(first));
}

//OUPTPUT : 
/*
Linked List : 
Display LinkedList : 10 20 30 4 5 
Recursion To Display LinkedList : 10 20 30 4 5 5 4 30 20 10 
Length is : 5 
Recursive Length is : 5 
Sum is : 69 
Recursive Sum is : 69 
Max is : 30 
Recursive Max is : 30 
Key is not found!

Key is not found!

Key is found : 4
After move to Head Node : 4 5 10 20 30 

Before Insert value : 4 5 10 20 30 
After Insert value : 2 3 4 5 10 20 30 
Insert in sorted LinkedList : 1 2 3 4 5 6 10 20 30 40 
After Insert Length is : 10 

Deleted Element 6 : 
1 2 3 4 5 10 20 30 40 
Sorted LinkedList : 1 2 3 4 5 10 20 30 40 

Add Duplicates : 1 2 2 3 4 5 5 5 10 20 30 40 
After remove Duplicates : 1 2 3 4 5 10 20 30 40 
Reverse1 : 40 30 20 10 5 4 3 2 1 
Reverse2 : 1 2 3 4 5 10 20 30 40 
Rcursive Reverse3 : 40 30 20 10 5 4 3 2 1 

Merging 2-LinkedList : 1 2 3 4 5 6 7 8 9 10 
ISLoop : 1

*/


