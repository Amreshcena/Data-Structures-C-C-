#include <iostream>
using namespace std;
#include <stdlib.h>
/*
struct Node{
    int data;
    struct Node *next;
}*front=NULL,*rear=NULL;

void enqueue(int x){
  struct Node *t;
  t=(struct Node*)malloc(sizeof(struct Node));
  if(t==NULL)
    cout<<"Queue is Full!\n";
  else{
    t->data=x;
    t->next=NULL;
    if(front==NULL)
      front=rear=t;
    else{
      rear->next=t;
      rear=t;
    }
  }
}
int dequeue(){
  int x=-1;
  struct Node *t;

  if(front==NULL)
    cout<<"Queue is empty!\n";
  else{
    x=front->data;
    t=front;
    front=front->next;
    delete t;  
  }return x;
}
void display(){
  struct Node *p=front;
  while(p!=NULL){
    cout<<p->data<<" ";
    p=p->next;
  }cout<<endl;
}

int main() {
  cout << "LinkedList in Queue : \n";

 enqueue(10);
 enqueue(20);
 enqueue(30);
 enqueue(40);
 enqueue(50);
 
 display();
 
 cout<<"Deleted Value : "<<dequeue()<<endl;
   display();
} 
*/  
//Using c++

class Node{
public:
    int data;
    Node* next;
};
 
class Queue{
private:
    Node* front;
    Node* rear;
public:
    Queue();
    ~Queue();
    void enqueue(int x);
    int dequeue();
    bool isEmpty();
    void display();
};
 
Queue::Queue() {
    front = nullptr;
    rear = nullptr;
}
 
void Queue::enqueue(int x) {
    Node* t = new Node;
    if (t == nullptr){
        cout << "Queue Overflow" << endl;
    } else {
        t->data = x;
        t->next = nullptr;
        if (front == nullptr){
            front = t;
            rear = t;
        } else {
            rear->next = t;
            rear = t;
        }
    }
}
 
int Queue::dequeue() {
    int x = -1;
    Node* p;
    if (isEmpty()){
        cout << "Queue Underflow" << endl;
    } else {
        p = front;
        front = front->next;
        x = p->data;
        delete p;
    }
    return x;
}
 
bool Queue::isEmpty() {
    if (front == nullptr){
        return true;
    }
    return false;
}
 
Queue::~Queue() {
    Node* p = front;
    while (front){
        front = front->next;
        delete p;
        p = front;
    }
}
 
void Queue::display() {
    Node* p = front;
    while (p){
        cout << p->data << flush;
        p = p->next;
        if (p != nullptr){
            cout << " <- " << flush;
        }
    }
    cout << endl;
}
 
int main() {
 
    int A[] = {1, 3, 5, 7, 9};
    Queue q;
 
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        q.enqueue(A[i]);
    }
 
    q.display();
 
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        q.dequeue();
    }
    q.dequeue();
 
    return 0;
}


//OUTPUT::
/*
LinkedList in Queue : 
10 20 30 40 50 
Deleted Value : 10
20 30 40 50 

1 <- 3 <- 5 <- 7 <- 9
Queue Underflow

*/