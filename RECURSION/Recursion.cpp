#include <iostream>
using namespace std;
/*void fun(int n){
  if(n>0){
    cout<<n<<" ";
    fun(n-1);
    cout<<n<<" ";
   }}
int main() {
  cout << "Recursion\n";
  int x=10;
  fun(x);
  return 0;
} */ 
 /*
int fun(int n){
  static int x=0;
  if(n>0){
    x++;
    return fun(n-1)+x;
  }
  return 0;
}
int main(){
  cout<<"static & Global variable"<<endl;
  int r;
  r=fun(5);
  cout<<r<<" "<<endl;
  r=fun(5);
  cout<<r<<" ";
  return 0;
} */
/*void fun(int n){
  if(n>0){
     cout<<n<<" ";
    fun(n-1);
    fun(n-1);
  }
}
int main(){
  cout<<"Tree Recursion"<<endl;
  fun(3);
} */
/*void funB(int n);
void funA(int n){
  if(n>0){
    cout<<n<<" ";
    funB(n-1);
  }}
void funB(int n){
  if(n>1){
    cout<<n<<" ";
    funA(n/2);
  }
}
int main(){
  cout<<"Indirect Recursion"<<endl;
  funA(20);
} */

/*int fun(int n){
  if(n>100){
    return n-10;
  }else
    return fun(fun(n+11));
}
int main(){
  cout<<"Nested Recursion"<<endl;
  int a=fun(95);
  cout<<a<<endl;
  int b=fun(200);
  cout<<b<<endl;
} */

/*int sum(int n){
  if(n==0)
    return 0;
  else
    return sum(n-1)+n;
}
int loop(int n){
  int i,s=0;
  for(i=1;i<=n;i++)
    s+=i;
  return s;
}
int formula(int n){
  if(n==0)
    return 0;
  else
    return n*(n+1)/2;
}
int main(){
  cout<<"Sum of N using Recursion"<<endl;
  int a=sum(5);
  int b=loop(5);
  int c=formula(5);
  cout<<a<<endl;
  cout<<b<<endl;
  cout<<c<<endl;
} */

/*int fact(int n){
  if(n==0)
    return 1;
  else
    return fact(n-1)*n;
}
int loop(int n){
  int f=1,i;
  for(i=1;i<=n;i++)
    f*=i;
  return f;
}
int main(){
  cout<<"factorial of a number"<<endl;
  int a=fact(5);
  int b=loop(5);
  cout<<a<<endl;
  cout<<b<<endl;
} */

/*int pow(int m,int n){
  if(n==0)
    return 1;
  else
    return pow(m,n-1)*m;
}
int pow1(int m,int n){
  if(n==0)
    return 1;
  if(n%2==0)
    return pow1(m*m,n/2);
  else
    return m*pow1(m*m,(n-1)/2);
}
int main(){
  cout<<"Power Recursion"<<endl;
  int a=pow(2,9);
  int b=pow(2,9);
  cout<<a<<endl;
  cout<<b<<endl;
} */

/*double e(int x,int n){
  static double p=1,f=1,a;
  if(n==0)
    return 1;
  else
    a=e(x,n-1);
    p=p*x;
    f=f*n;
    return a+p/f;
}
int main(){
  cout<<"Taylor series using Recursion"<<endl;
  cout<<e(3,10)<<endl;
} */

/*double e(int x,int n){
  static double s;
  if(n==0)
    return s;
  else
    s=1+x*s/n;
    return e(x,n-1);
}
double l(int x,int n){
  double s=1,numerator=1,denominator=1;
  for(int i=1;i<=n;i++){
    numerator*=x;
    denominator*=i;
    s+=numerator/denominator;
  }
  return s; 
}
int main(){
  cout<<"Taylor series Horner's Rule"<<endl;
  cout<<e(1,10)<<endl;
  cout<<l(1,10)<<endl;
}  */

/*int fib(int n){
  int t0=0,t1=1,s=0,i;
  if(n<=1)
    return n;
  for(i=2;i<=n;i++){
    s=t0+t1;
    t0=t1;
    t1=s;
  }
  return s;
}
int rfib(int n){
  if(n<=1)
    return n;
  else
    return rfib(n-2)+rfib(n-1);
}
int f[10]; 
//memoization using recursion -1
int mfib(int n){
  if(n<=1){
    f[n]=n;
    return n;
  }
  else{
    if(f[n-2]==-1)
      f[n-2]=mfib(n-2);
    if(f[n-1]==-1)
      f[n-1]=mfib(n-1);
    return f[n-2]+f[n-1];
  }
}
int main(){
  cout<<"Fibonacci series"<<endl;
  for(int i=1;i<=10;i++){
    f[i]=-1;
  }
  cout<<"Iteration : "<<fib(10)<<endl;
  cout<<"Recursion : "<<rfib(10)<<endl;
  cout<<"memoization : "<<mfib(10)<<endl;
}  */

/*int fact(int n){
  if(n==0)return 1;
  else
    return fact(n-1)*n;
}
int nCr(int n,int r){
  int num,den;
  num=fact(n);
  den=fact(r)*fact(n-r);
    return num/den;
}
int Rncr(int n,int r){
  if(r==0 || n==r){
    return 1;
  }else{
    return Rncr(n-1,r-1)+Rncr(n-1,r);
  }
}
int main(){
  cout<<"nCr using Recursion"<<endl;
  cout<<"Iteration : "<<nCr(4,2)<<endl;
  cout<<"Recursion : "<<Rncr(4,2)<<endl;
  return 0;
}  */

/*void TOH(int n,int a,int b,int c){
  if(n>0){
    TOH(n-1,a,c,b);
    cout<<a<<","<<c<<endl;
    TOH(n-1,b,a,c);
  }
}
int main(){
  cout<<"Tower of Hanoi using Recursion"<<endl;
  TOH(3,1,2,3);
  return 0;
} */



//OUTPUT : 
/*

Recursion
10 9 8 7 6 5 4 3 2 1 1 2 3 4 5 6 7 8 9 10

static & Global variable
25 
50

Tree Recursion
3 2 1 1 2 1 1

Indirect Recursion
20 19 9 8 4 3 1

Nested Recursion
91
190

Sum of N using Recursion
15
15
15

factorial of a number
120
120

Power Recursion
512
512

Taylor series using Recursion
20.0797

Taylor series Horner's Rule
2.71828
2.71828

Fibonacci series
Iteration : 55
Recursion : 55
memoization : 55

nCr using Recursion
Iteration : 6
Recursion : 6

Tower of Hanoi using Recursion
1,3
1,2
3,2
1,3
2,1
2,3
1,3
*/










