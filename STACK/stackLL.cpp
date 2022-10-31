#include <iostream>
using namespace std;
/*
struct Node{
    int data;
    struct Node *next;
}*top=NULL;

void push(int x){
  struct Node *t;
  t=new Node;
  if(t==NULL)
    cout<<"Stack is full\n";
  else{
    t->data=x;
    t->next=top;
    top=t;
  }
}
int pop(){
  struct Node *t;
  int x=-1;
  if(top==NULL)
    cout<<"Stack is Empty";
  else{
    t=top;
    top=top->next;
    x=t->data;
    delete t;
  }return x;
}
int peek(int index){
  struct Node *t;
  t=top;
  int i;
  for(i=0;t!=NULL && i<index-1;i++)
    t=t->next;
  if(t!=NULL)
    return t->data;
  return -1;
}
int stackTop(){
  if(top!=NULL)
    return top->data;
  return -1;
}
int isEmpty(){
  return top!=NULL ? 0:1;
}
int isFull(){
  struct Node *t;
  t=new Node;
  int r;
  if(t==NULL)
    return -1;
  else{
    r=t ? 1:0;
    delete t;
    return r;
  }
}
void display(){
  struct Node *p;
  p=top;
  while(p!=NULL){
    cout<<p->data<<" ";
    p=p->next;
  }cout<<"\n";
}
int main() { 
  cout << "Stack LinkedList\n\n";
  push(10);
  push(20);
  push(30);
  push(40);
  push(50);

  display();
   
  cout<<"\nPeek value : "<<peek(3);

  cout<<"\nIsFull : "<<isFull();
  
  cout<<"\nTop Value : "<<stackTop();
  
  cout<<"\nIsEmpty : "<<isEmpty();
  
  cout<<"\nDelete value : "<<pop();
  cout<<"\nAfter Delete : ";
  display();
  }
*/

//OUTPUT ::

/*
Stack LinkedList

50 40 30 20 10 

Peek value : 30
IsFull : 1
Top Value : 50
IsEmpty : 0
Delete value : 50
After Delete : 40 30 20 10 

*/


//Using C++ Class
 
class Node{
public:
    int data;
    Node* next;
};
 
class Stack{
private:
    Node* top;
public:
    Stack();
    ~Stack();
    void push(int x);
    int pop();
    int peek(int index);
    int isEmpty();
    int isFull();
    int stackTop();
};
 
Stack::Stack() {
    top = NULL;
}
 
Stack::~Stack() {
    Node* p = top;
    while (top){
        top = top->next;
        delete p;
        p = top;
    }
}
 
void Stack::push(int x) {
    Node* t = new Node;
    if (t == NULL){
        cout << "Stack Overflow!" << endl;
    } else {
        t->data = x;
        t->next = top;
        top = t;
    }
}
 
int Stack::pop() {
    Node* p;
    int x = -1;
    if (top == nullptr){
        cout << "Stack Underflow!" << endl;
    } else {
        p = top;
        x = p->data;
        top = top->next;
        delete p;
    }
    return x;
}
 
int Stack::isFull() {
    Node* t = new Node;
    int r = t ? 1 : 0;
    delete t;
    return r;
}
 
int Stack::isEmpty() {
    return top ? 0 : 1;
}
 
int Stack::stackTop() {
    if (top){
        return top->data;
    }
    return -1;
}
 
int Stack::peek(int index) {
    if (isEmpty()){
        return -1;
    } else {
        Node* p = top;
 
        for (int i=0; p != nullptr && i<index-1; i++){
            p = p->next;
        }
 
        if (p != nullptr){
            return p->data;
        } else {
            return -1;
        }
    }
}
 
int main() {
 
    int A[] = {1, 3, 5, 7, 9};
 
    Stack stk;
 
    // Populate stack
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        stk.push(A[i]);
    }
 
    cout << "Stack peek at 3rd: " << stk.peek(3) << endl;
    cout << "Stack peek at 10th: " << stk.peek(10) << endl;
    cout << "Stack top: " << stk.stackTop() << endl;
    cout << "Stack full: " << stk.isFull() << endl;
    cout << "Stack empty: " << stk.isEmpty() << endl;
 
    // Pop out elements from stack
    cout << "Popped: " << flush;
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        cout << stk.pop() << ", " << flush;
    }
    cout << endl;
 
    // Underflow
    cout << stk.pop() << endl;
 
    return 0;
} 


//OUTPUT::

/*
Stack peek at 3rd: 5
Stack peek at 10th: -1
Stack top: 9
Stack full: 1
Stack empty: 0
Popped: 9, 7, 5, 3, 1, 
Stack Underflow!
-1
*/


