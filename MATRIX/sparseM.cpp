#include <iostream>
#include <stdlib.h>
using namespace std;

/*struct Element{
int i;
int j;
int x;
};
struct Sparse{
int m;
int n;
int num;
struct Element *ele;
};
void create(Sparse *s){
  int i;
  cout<<"Enter the dimentions : "<<endl;
  cin>>s->m>>s->n;
  cout<<"Number of Non-Zeros : "<<endl;
  cin>>s->num;

  s->ele=(struct Element *)malloc(s->num*sizeof(struct Element));
  cout<<"enter Non-Zero elements : "<<endl;
  for(i=0;i<s->num;i++){
    scanf("%d%d%d",&s->ele[i].i,&s->ele[i].j,&s->ele[i].x);
  }
}
void display(struct Sparse s){
  int i,j,k=0;
  for(i=0;i<s.m;i++){
    for(j=0;j<s.n;j++){
      if(i==s.ele[k].i && j==s.ele[k].j)
        cout<<s.ele[k++].x<<" ";
      else
        cout<<"0 ";
    }cout<<endl;
  }
}  */
/*
class Element {
public:
  int i;
  int j;
  int x;
};
class Sparse{
private:
  int m;
  int n;
  int num;
  Element *ele;
public:
  Sparse(int m,int n,int num){
    this->m=m;
    this->n=n;
    this->num=num;
    ele=new Element[this->num];
  }

  ~Sparse(){
    delete [] ele;
  }

  void read(){
    cout<<"Enter Non-Zero elements : "<<endl;
    for(int i=0;i<num;i++){
      cin>>ele[i].i>>ele[i].j>>ele[i].x;
    }
  }
  void display(){
    int k=0;
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        if(ele[k].i==i && ele[k].j==j)
          cout<<ele[k++].x<<" ";
        else
          cout<<"0 ";
      }cout<<endl;
    }}
};  */

struct Term {
  int coeff;
  int exp;
};
struct Poly {
  int n;
  struct Term *terms;
};
void create(struct Poly *p) {
  int i;
  printf("Number of terms?");
  scanf("%d", &p->n);
  p->terms = (struct Term *)malloc(p->n * sizeof(struct Term));

  printf("Enter terms\n");
  for (i = 0; i < p->n; i++)
    scanf("%d%d", &p->terms[i].coeff, &p->terms[i].exp);
}
void display(struct Poly p) {
  int i;
  for (i = 0; i < p.n; i++)

    printf("%dx%d+", p.terms[i].coeff, p.terms[i].exp);
  printf("\n");
}
struct Poly *add(struct Poly *p1, struct Poly *p2) {
  int i, j, k;
  struct Poly *sum;

  sum = (struct Poly *)malloc(sizeof(struct Poly));
  sum->terms = (struct Term *)malloc((p1->n + p2->n) * sizeof(struct Term));
  i = j = k = 0;

  while (i < p1->n && j < p2->n) {
    if (p1->terms[i].exp > p2->terms[j].exp)
      sum->terms[k++] = p1->terms[i++];
    else if (p1->terms[i].exp < p2->terms[j].exp)
      sum->terms[k++] = p2->terms[j++];
    else {
      sum->terms[k].exp = p1->terms[i].exp;
      sum->terms[k++].coeff = p1->terms[i++].coeff + p2->terms[j++].coeff;
    }
  }
  for (; i < p1->n; i++)
    sum->terms[k++] = p1->terms[i];
  for (; j < p2->n; j++)
    sum->terms[k++] = p2->terms[j];

  sum->n = k;
  return sum;
}

int main() {
  cout << "Sparse Matrix : " << endl;

  // struct Sparse s;
  // create(&s);
  // display(s);
  // Sparse s(5,5,5);
  // s.read();
  // s.display();

  cout << "Polynomial : " << endl;
  struct Poly p1, p2, *p3;

  create(&p1);
  create(&p2);

  p3 = add(&p1, &p2);
  cout << endl;
  display(p1);
  cout << endl;
  display(p2);
  cout << endl;
  display(*p3);
}

//using linked list polynomial----
/*
struct Node
{
 int coeff;
 int exp;
 struct Node *next;
}*poly=NULL;
void create()
{
 struct Node *t,*last=NULL;
 int num,i;
 
 printf("Enter number of terms");
 scanf("%d",&num);
 printf("Enter each term with coeff and exp\n");
 
 for(i=0;i<num;i++)
 {
 t=(struct Node *)malloc(sizeof(struct Node));
 scanf("%d%d",&t->coeff,&t->exp);
 t->next=NULL;
 if(poly==NULL)
 {
 poly=last=t;
 }
 else
 {
 last->next=t;
 last=t;
 }
 }
}
void Display(struct Node *p)
{
 while(p)
 {
 printf("%dx%d +",p->coeff,p->exp);
 p=p->next;
 }
 printf("\n");
}
long Eval(struct Node *p, int x)
{
 long val=0;
 
 while(p)
 {
 val+=p->coeff*pow(x,p->exp);
 p=p->next;
 }
 return val;
}
*/