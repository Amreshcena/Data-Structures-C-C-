#include <iostream>
using namespace std;

struct Stack {
  int size;
  int top;
  int *S;
};
void create(struct Stack *st) {
  cout << "Enter Size : \n";
  cin >> st->size;
  st->top = -1;
  st->S = new int[st->size];
}
void display(struct Stack st) {
  int i;
  for (i = st.top; i >= 0; i--)
    cout << st.S[i] << " ";
}
void push(struct Stack *st, int x) {
  if (st->top == st->size - 1)
    cout << "Stack Overflow\n";
  else {
    st->top++;
    st->S[st->top] = x;
  }
}
int pop(struct Stack *st) {
  int x = -1;
  if (st->top == -1)
    cout << "Stack Underflow\n";
  else {
    x = st->S[st->top];
    st->top--;
  }
  return x;
}
int peek(struct Stack st,int index){
  int x=-1;
  if(st.top-index+1<0)
    cout<<"Invalid Index \n";
  else
    x=st.S[st.top-index+1];
  return x;
}
int isEmpty(struct Stack st){
  if(st.top==-1)
    return 1;
  return 0;
}
int isFull(struct Stack st){
  if(st.top==st.size-1)
    return 1;
  return 0;
}
int stackTop(struct Stack st){
  if(!isEmpty(st))
    return st.S[st.top];
  return -1;
}

int main() {
  cout << "STACK : \n\n";

  struct Stack st;
  create(&st);

  push(&st, 10);
  push(&st, 20);
  push(&st, 30);
  push(&st, 40);
  push(&st, 50);
   cout<<"Peek value : "<< peek(st,5)<<endl;

  cout<<"Deleted value : "<< pop(&st)<<endl;
  display(st);
}

//OUTPUT::
/*
STACK : 

Enter Size : 
5
Peek value : 10
Deleted value : 50
40 30 20 10
*/