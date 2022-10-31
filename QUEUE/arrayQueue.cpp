#include <iostream>
using namespace std;

/*
struct queue{
   int size;
   int front;
   int rear;
   int *Q;
};
void create(struct queue *q,int size){
  q->size=size;
  q->front=q->rear=-1;
  q->Q=(int *)malloc(q->size*sizeof(int));
}
void enqueue(struct queue *q,int x){
  if(q->rear==q->size-1)
    cout<<"Queue is Full!\n";
  else{
    q->rear++;
    q->Q[q->rear]=x;
  }
}
int dequeue(struct queue *q){
  int x=-1;
  if(q->front==q->rear)
    cout<<"Queue is Empty!\n";
  else{
    q->front++;
    x=q->Q[q->front];
  }
  return x;
}
void display(struct queue q){
  int i;
  cout<<endl;
  for(i=q.front+1;i<=q.rear;i++)
    cout<<q.Q[i]<<" ";
}

int main() {
  cout << "Oueue : "<<endl;
  
  struct queue q;
  create(&q,5);

  enqueue(&q,10);
  enqueue(&q,20);
  enqueue(&q,30);
  enqueue(&q,40);
  enqueue(&q,50);

  display(q);
  cout<<"\nDeleted value : "<<dequeue(&q);
  display(q);
  
}
*/
/*
class Queue{
private:
    int size;
    int front;
    int rear;
    int* Q;
public:
    Queue(int size);
    ~Queue();
    bool isFull();
    bool isEmpty();
    void enqueue(int x);
    int dequeue();
    void display();
};
 
Queue::Queue(int size) {
    this->size = size;
    front = -1;
    rear = -1;
    Q = new int [size];
}
 
Queue::~Queue() {
    delete [] Q;
}
 
bool Queue::isEmpty() {
    if (front == rear){
        return true;
    }
    return false;
}
 
bool Queue::isFull() {
    if (rear == size-1){
        return true;
    }
    return false;
}
 
void Queue::enqueue(int x) {
    if (isFull()){
        cout << "Queue Overflow" << endl;
    } else {
        rear++;
        Q[rear] = x;
    }
}
 
int Queue::dequeue() {
    int x = -1;
    if (isEmpty()){
        cout << "Queue Underflow" << endl;
    } else {
        front++;
        x = Q[front];
    }
    return x;
}
 
void Queue::display() {
    for (int i=front+1; i<=rear; i++){
        cout << Q[i] << flush;
        if (i < rear){
            cout << " <- " << flush;
        }
    }
    cout << endl;
}
 
int main() {
 
    int A[] = {1, 3, 5, 7, 9};
 
    Queue q(sizeof(A)/sizeof(A[0]));
    // Enqueue
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        q.enqueue(A[i]);
    }
    // Display
    q.display();
    // Overflow
    q.enqueue(10);
    // Dequeue
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        q.dequeue();
    }
    // Underflow
    q.dequeue();
    return 0;
}
*/

//OUTPUT::
/*
Oueue : 

10 20 30 40 50 
Deleted value : 10
20 30 40 50

//using C++

1 <- 3 <- 5 <- 7 <- 9
Queue Overflow
Queue Underflow
*/


struct queue{
   int size;
   int front;
   int rear;
   int *Q;
};
void create(struct queue *q,int size){
  q->size=size;
  q->front=q->rear=0;
  q->Q=(int *)malloc(q->size*sizeof(int));
}
void enqueue(struct queue *q,int x){
  if((q->rear+1)%q->size==q->front)
    cout<<"Queue is Full!\n";
  else{
    q->rear=(q->rear+1)%q->size;
    q->Q[q->rear]=x;
  }
}
int dequeue(struct queue *q){
  int x=-1;
  if(q->front==q->rear)
    cout<<"Queue is Empty!\n";
  else{
    q->front=(q->front+1)%q->size;
    x=q->Q[q->front];
  }
  return x;
}
void display(struct queue q){
  int i=q.front+1;
  cout<<endl;
  do{
    cout<<q.Q[i]<<" ";
    i=(i+1)%q.size;
  }while(i!=(q.rear+1)%q.size);
}

int main(){
  cout<<"Circular queue in Array : "<<endl;

  struct queue q;
  create(&q,5);

  enqueue(&q,10);
  enqueue(&q,20);
  enqueue(&q,30);
  enqueue(&q,40);
  enqueue(&q,50);

  display(q);
  cout<<"\nDeleted value : "<<dequeue(&q);
  display(q);
}

//OUTPUT::
/*
Circular queue in Array : 
Queue is Full!

10 20 30 40 
Deleted value : 10
20 30 40
*/
