#include <iostream>
#include <stdlib.h>
#include <strings.h>
#include <stack>
using namespace std;
#include <cstring>

/*
struct Node{
    char data;
    struct Node *next;
}*top=NULL;

void push(char x){
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
char pop(){
  struct Node *t;
  char x=-1;
  if(top==NULL)
    cout<<"Stack is Empty";
  else{
    t=top;
    top=top->next;
    x=t->data;
    delete t;
  }return x;
}
void display(){
  struct Node *p;
  p=top;
  while(p!=NULL){
    cout<<p->data<<" ";
    p=p->next;
  }cout<<"\n";
}
int isBalanced(char *exp)
{
 int i;
 
 for(i=0;exp[i]!='\0';i++)
 {
 if(exp[i]=='(')
 push(exp[i]);
 else if(exp[i]==')')
 {
 if(top==NULL)
 return 0;
 pop();
 }
 }
 if(top==NULL)
 return 1;
 else
 return 0;
}
int pre(char x){
  if(x=='+' || x=='-')
    return 1;
  else if(x=='*' || x=='/')
    return 2;
  return 0;
}
int isOperand(char x){
  if(x=='+' || x=='-' || x=='*' || x=='/')
    return 0;
  else
    return 1;
}

char * InToPost(char *infix)
{
 int i=0,j=0;
 char *postfix;
 int len=strlen(infix);
 postfix=(char *)malloc((len+2)*sizeof(char));
 
 while(infix[i]!='\0')
 {
 if(isOperand(infix[i]))
 postfix[j++]=infix[i++];
 else
 {
 if(pre(infix[i])>pre(top->data))
 push(infix[i++]);
 else
 {
 postfix[j++]=pop();
 }
 }
 }
 while(top!=NULL)
 postfix[j++]=pop();
 postfix[j]='\0';
 return postfix;
}


int main() {
  char *infix="a+b*c-d/e";
 push('#');
 
 char *postfix=InToPost(infix);
 
 printf("Infix-Postfix : %s ",postfix);
}
*/

/*
int isOperand(char x){
    if (x == '+' || x == '-' || x == '*' || x == '/' ||
        x == '^' || x == '(' || x == ')'){
        return 0;
    }
    return 1;
}
 
int outPrecedence(char x){
    if (x == '+' || x == '-'){
        return 1;
    } else if (x == '*' || x == '/'){
        return 3;
    } else if (x == '^'){
        return 6;
    } else if (x == '('){
        return 7;
    } else if (x == ')'){
        return 0;
    }
    return -1;
}
 
int inPrecedence(char x){
    if (x == '+' || x == '-'){
        return 2;
    } else if (x == '*' || x == '/'){
        return 4;
    } else if (x == '^'){
        return 5;
    } else if (x == '('){
        return 0;
    }
    return -1;
}
 
char* convert(char* infix){
    char* postfix = new char [strlen(infix) + 1];
 
    stack<char> stk;
 
    int i = 0;
    int j = 0;
 
    while (infix[i] != '\0'){
        if (isOperand(infix[i])){
            postfix[j++] = infix[i++];
        } else {
            if (stk.empty() || outPrecedence(infix[i]) > inPrecedence(stk.top())){
                stk.push(infix[i++]);
            } else if (outPrecedence(infix[i]) == inPrecedence(stk.top())){
                stk.pop();
            }
            else {
                postfix[j++] = stk.top();
                stk.pop();
            }
        }
    }
 
    while (! stk.empty() && stk.top() != ')'){
        postfix[j++] = stk.top();
        stk.pop();
    }
 
    postfix[j] = '\0';
 
    return postfix;
 
}
 
 
int main() {
 
    char infix[] = "((a+b)*c)-d^e^f";
 
    cout <<"Convert Infix-postfix : "<< convert(infix) << endl;
}
*/

/*
struct Node
{
 int data;
 struct Node *next;
}*top=NULL;

void push(int x)
{
 struct Node *t;
 t=(struct Node*)malloc(sizeof(struct Node));
 
 if(t==NULL)
 printf("stack is full\n");
 else
 {
 t->data=x;
 t->next=top;
 top=t;
 }
 
}
int pop()
{
 struct Node *t;
 int x=-1;
 
 if(top==NULL)
 printf("Stack is Empty\n");
 else
 {
 t=top;
 top=top->next;
 x=t->data;
 free(t);
 }
 return x;
}
void Display()
{
 struct Node *p;
 p=top;
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
 printf("\n");
}
int isBalanced(char *exp)
{
 int i;
 
 for(i=0;exp[i]!='\0';i++)
 {
 if(exp[i]=='(')
 push(exp[i]);
 else if(exp[i]==')')
 {
 if(top==NULL)
 return 0;
 pop();
 }
 }
 if(top==NULL)
 return 1;
 else
 return 0;
}
int pre(char x)
{
 if(x=='+' || x=='-')
 return 1;
 else if(x=='*' || x=='/')
 return 2;
 return 0;
}
 
int isOperand(char x)
{
 if(x=='+' || x=='-' || x=='*' || x=='/')
 return 0;
 else
 return 1;
 
}
 
char * InToPost(char *infix)
{
 int i=0,j=0;
 char *postfix;
 long len=strlen(infix);
 postfix=(char *)malloc((len+2)*sizeof(char));
 
 while(infix[i]!='\0')
 {
 if(isOperand(infix[i]))
 postfix[j++]=infix[i++];
 else
 {
 if(pre(infix[i])>pre(top->data))
 push(infix[i++]);
 else
 {
 postfix[j++]=pop();
 }
 }
 }
 while(top!=NULL)
 postfix[j++]=pop();
 postfix[j]='\0';
 return postfix;
}
int eval(char *postfix){
  int i=0;
  int x1,x2,r;
  for(i=0;postfix[i]!='\0';i++){
    if(isOperand(postfix[i]))
      push(postfix[i]-'0'); //0 is for convert ascii to number value
    else{
      x2=pop(),x1=pop();
      switch(postfix[i]){
        case '+':r=x1+x2; break;
        case '-':r=x1-x2; break;
        case '*':r=x1*x2; break;
        case '/':r=x1/x2; break;
      }
      push(r);
    }
  }return top->data;
}

int main(){

  char *postfix="234*+82/-";

  cout<<"Postfix evaluation : "<<eval(postfix);
}

*/

//OUTPUT::

//Infix-Postfix : abc*+de/-#
//Convert Infix-postfix : ab+c*def^^-
//Postfix evaluation : 10


//Using C++ postfix Evaluation

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
    top = nullptr;
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
    if (t == nullptr){
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
 
 
int isOperand(char x){
    if (x == '+' || x == '-' || x == '*' || x == '/'){
        return 0;
    }
    return 1;
}
 
int operation(char op, int x, int y){
    if (op == '+'){
        return x + y;
    } else if (op == '-'){
        return x - y;
    } else if (op == '*'){
        return x * y;
    } else if (op == '/'){
        return x / y;
    }
}
 
int postfixEvaluate(char* postfix){
    stack<int> stk;
    int x;
    int y;
    int result;
    for (int i=0; postfix[i]!='\0'; i++){
        if (isOperand(postfix[i])){
            // int typecast would not work because of char so subtract '0'
            stk.push(postfix[i]-'0');
        } else {
            y = stk.top();
            stk.pop();
            x = stk.top();
            stk.pop();
            result = operation(postfix[i], x, y);
            stk.push(result);
        }
    }
    result = stk.top();
    stk.pop();
    return result;
}
 
int Evaluate(char* postfix){
    Stack stk;
    int x;
    int y;
    int result;
    for (int i=0; postfix[i]!='\0'; i++){
        if (isOperand(postfix[i])){
            // int typecast would not work because of char so subtract '0'
            stk.push(postfix[i]-'0');
        } else {
            y = stk.pop();
            x = stk.pop();
            result = operation(postfix[i], x, y);
            stk.push(result);
        }
    }
    result = stk.pop();
    return result;
}
 
int main() {
 
    char postfix[] = "35*62/+4-";
    cout << Evaluate(postfix) << endl;
    cout << postfixEvaluate(postfix) << endl;
 
    return 0;
}

//OUTPUT::
// 14
// 14