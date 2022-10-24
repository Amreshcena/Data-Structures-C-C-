#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
/*int main() {

  cout<<"Arrays"<<endl;
  int a[5];
  a[0]=3;
  a[1]=9;
  a[2]=10;
  cout<<sizeof(a)<<endl;
  cout<<a[1]<<endl;
  printf("%d\n",a[2]);

  int b[10]={1,2,3,4,5};
  cout<<sizeof(b)<<endl;
   cout<<b[9]<<endl;

  for(int i=0;i<10;i++){
    cout<<b[i]<<endl;
  }
  for(int x:a){
    cout<<x<<endl;

    int n;
    cout<<"Enter numbers:"<<endl;
    cin>>n;
    int c[n];
    c[0]=10;

    for(int y:c){
      cout<<x<<endl;
    }
  }} */
/*
  struct Rectangle{
  int length;
  int breadth;
  char x; //take 1byte and it discard 3bytes --padding method..
  };
int main(){
  cout<<"Structures"<<endl;

  struct Rectangle r1={10,5};
  r1.length=15;
  r1.breadth=10;
  cout<<sizeof(r1)<<endl;
  cout<<r1.length<<endl;
  cout<<r1.breadth<<endl;
}*/

/*int main(){
  cout<<"Pointers"<<endl;
  int a=10;
  int*p;
  p=&a;
  cout<<a<<endl;
  cout<<"Using pointer:"<<*p<<endl;
  cout<<"address of a:"<<&a<<endl;

  int A[5]={2,4,6,8,10};
  int *p1;
  p1=A;

  for(int i=0;i<5;i++){
    cout<<p1[i]<<endl;
    }
    int *p2;
    //p2=(int*)malloc(5*sizeof(int)); //used in c
    p2=new int[5];
    p2[0]=10;p2[1]=20;p2[2]=30;p2[3]=40;p2[4]=50;
    for(int i=0;i<5;i++){
    cout<<p2[i]<<endl;
    }
  delete []p2;
  //free(p2);
  cout<<sizeof(p2)<<endl;

  int *t1;
  char *t2;
  float *t3;
  double *t4;
  struct Rectangle *t5;

  //all pointers takes sizeof 8bits..
  cout<<sizeof(t1)<<endl;
  cout<<sizeof(t2)<<endl;
  cout<<sizeof(t3)<<endl;
  cout<<sizeof(t4)<<endl;
  cout<<sizeof(t5)<<endl;
}  */

/*int main(){
  cout<<"reference"<<endl;
  int a=10;
  int &r=a;
  a=25;
  int b=20;
  r=b;
  cout<<r<<endl<<a<<endl;
} */

/*struct Rectangle{
int length;
int breadth;
};
int main(){
  cout<<"Pointer in structure"<<endl;
  Rectangle r={10,5};
  cout<<r.length<<endl;
  cout<<r.breadth<<endl;

  Rectangle *p=&r;
  cout<<p->length<<endl;
  cout<<p->breadth<<endl;

  Rectangle *p1;
  //p1=(struct Rectangle *)malloc(sizeof(struct Rectangle));
  p1= new Rectangle;
  p1->length=15;
  p1->breadth=10;
  cout<<p1->length<<endl;
  cout<<p1->breadth<<endl;
} */
/*int add(int a,int b){
  int c;
  c=a+b;
  return c;
}
int main(){
  cout<<"Funtions"<<endl;
  int n1=10,n2=20,sum;
  sum=add(n1,n2);
  cout<<sum<<endl;
} */

  /*int add(int a,int b){
  a++;
    cout<<a<<endl;//formal parameter not affect actual parameter
    return 0;
    }
int main(){
  cout<<"parameter passing"<<endl;
  int n1=10,n2=20,sum;
   sum=add(n1,n2);
  cout<<n1<<endl;
}*/
/*void  swap(int *x,int *y){
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
int main(){
  int n1=5,n2=10;
  swap(&n1,&n2);
  cout<<n1<<endl<<n2<<endl;
}*/
/*void  swap(int &x,int &y){
  int temp;
  temp=x;
  x=y;
  y=temp;
}
int main(){
  int n1=5,n2=10;
  swap(n1,n2);
  cout<<n1<<endl<<n2<<endl;
}*/
/*void fun(int A[],int n){  // *A also work
  cout<<endl<<sizeof(A)/sizeof(int)<<endl; //8/4--2..
  A[0]=1;
  for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
  }
}
int * fun1(int size){
  int *p;
  p=new int[size];
  for(int i=0;i<size;i++){
    p[i]=i+1;
  }
  return p;
}
int main(){
  cout<<"Array as parameter"<<endl;
  int A[]={2,4,6,8,10};
  int n=5;
   cout<<endl<<sizeof(A)/sizeof(int)<<endl;//20/4--5..
  for(int x:A){
    cout<<x<<" ";
  }
   fun(A,n);
  cout<<endl;
  int *ptr,si=10;
  ptr=fun1(si);
  for(int i=0;i<si;i++){
    cout<<ptr[i]<<" ";
  }
  } */
/*struct Rectangle{
 int length,breadth;
};
void fun(struct Rectangle *p){
   p->length++;
   cout<<p->length<<endl<<p->breadth<<endl;
}
struct Rectangle *funn(){
  struct Rectangle *p1;
  p1=new Rectangle;
  //p1=(struct Rectangle *)malloc(sizeof(struct Rectangle));
  p1->length=15;
  p1->breadth=7;
}
int main(){
  cout<<"structure as parameter"<<endl;
  Rectangle r={10,5};
  cout<<r.length<<endl<<r.breadth<<endl;
  fun(&r);
  struct Rectangle *ptr=funn();
  cout<<ptr->length<<endl<<ptr->breadth<<endl; //15 7
} */
/*class Rectangle{
private:
  int length;
  int breadth;
public:
   Rectangle(){
     length=0;
     breadth=0;
   }
   Rectangle(int l,int b){
     length=l;
     breadth=b;
   }
  int area(){
    return length*breadth;
  }
 int perimeter(){
   return 2*(length+breadth);
 }
 void setLength(int l){
   length=l;
 }
 void setBreadth(int b){
   breadth=b;
 }
 int getLength(){
   return length;
 }
 int getbreadth(){
   return breadth;
 }
~Rectangle(){
  cout<<"Destructer"<<endl;
}
};

int main(){
  cout<<"class and constructer"<<endl;
  Rectangle r(10,5);
  cout<<r.area()<<endl;
  cout<<r.perimeter()<<endl;
}*/
/*template<class T>
class Arithemetic{
private:
 T a;
 T b;
public:
 Arithemetic(T a,T b);
 T add();
 T sub();
};
template<class T>
 Arithemetic<T>::Arithemetic(T a,T b){
   this->a=a;
   this->b=b;
 }
template<class T>
T Arithemetic<T>::add(){
  T c;
  c=a+b;
  return c;
}
template<class T>
T Arithemetic<T>::sub(){
  T c;
  c=a-b;
  return c;
}
int main(){
  Arithemetic<float>ar(10.55,4.5);
  Arithemetic<char>ari('A','B');
  cout<<ar.add()<<endl;
  cout<<ar.sub()<<endl;
  cout<<(int)ari.add()<<endl;
  cout<<(int)ari.sub()<<endl;
} */



