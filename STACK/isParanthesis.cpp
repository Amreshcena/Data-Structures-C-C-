#include <iostream>
using namespace std;
#include<cstring>
#include <stack>
#include <map>

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

int isBalance(char *exp){
  int i;
  for(i=0;exp[i]!='\0';i++){
    if(exp[i]=='(')
      push(exp[i]);
    else if(exp[i]==')'){
      if(top==NULL)
        return 0;
      pop();
    }
  }
  if(top==NULL)
    return 1;
  return 0;
}  

int isBalanced(char* exp){
 
    // Create map
    map<char, char> mapping;
    mapping['}'] = '{';
    mapping[')'] = '(';
    mapping[']'] = '[';
 
    // Create map iterator
    map<char, char>::iterator itr;
 
    // Create stack
    stack<char> stk;
 
    for (int i=0; i<strlen(exp); i++){
        if (exp[i] == '{' || exp[i] == '[' || exp[i] == '('){
            stk.push(exp[i]);
        } else if (exp[i] == '}' || exp[i] == ']' || exp[i] == ')'){
            if (stk.empty()){
                return false;
            } else {
                char temp = stk.top();
                itr = mapping.find(exp[i]);
                if (temp == itr->second){  // itr->first is key, itr->second is value
                    stk.pop();
                } else {
                    return false;
                }
            }
        }
    }
    return stk.empty() ? true : false;
}
int main(){

  char *exp = "((a+b)*(c-d))";
  
  cout<<"IsParanthesis : "<<isBalance(exp)<<endl;

    char A[] = "{([a+b]*[c-d])/e}";
    cout <<"\nIsParanthesis : "<< isBalanced(A) << endl;
 
    char B[] = "{([a+b]}*[c-d])/e}";
    cout<<"\nIsParanthesis : " << isBalanced(B) << endl;
 
    char C[] = "{([{a+b]*[c-d])/e}";
    cout<<"\nIsParanthesis : " << isBalanced(C) << endl;
}


/*OUTPUT :: 

IsParanthesis : 1

IsParanthesis : 1.

IsParanthesis : 0

IsParanthesis : 0
*/