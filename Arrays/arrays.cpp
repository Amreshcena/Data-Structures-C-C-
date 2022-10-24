#include <iostream>
using namespace std;

/*int main() {
  cout <<"Arrays"<<endl;
  int a[5]={1,2,3,4,5},i;
  for(i=0;i<5;i++){
    cout<<&a[i]<<endl;
    cout<<a[i]<<endl;
  }
} */

/*int main(){
  cout<<"Static & Dynamic array"<<endl;
  int A[5]={1,2,3,4,5};
  int *p,i;

  p=new int[5];
  //p=(int *)malloc(5*sizeof(int)); //using c--
  p[0]=2;
  p[1]=4;
  p[2]=6;
  p[3]=8;
  p[4]=10;
  for(i=0;i<5;i++)
    cout<<A[i]<<" ";
  cout<<endl;
  for(i=0;i<5;i++)
    cout<<p[i]<<" ";
}  */

/*int main(){
  cout<<"increasing the size of Array"<<endl;
  int *p,*q,i;
   p=new int[5];
  p[0]=1;p[1]=3;p[2]=5;p[3]=7;p[4]=9;
  q=new int[10];
  for(i=0;i<5;i++)
    q[i]=p[i];
  free(p);
  p=q;
  q=NULL;
  for(i=0;i<5;i++)
    cout<<p[i]<<" ";
} */

/*int main(){
  cout<<"2-Dimensional Array"<<endl;
  int A[3][4]={{1,2,3,1},{4,5,6,4},{7,8,9,7}};
  int *B[3],**C;
  int i,j;
  for(i=0;i<3;i++){
    for(j=0;j<4;j++){
      cout<<A[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<"--------------";
  cout<<endl;
  B[0]=new int[4];
  B[1]=new int[4];
  B[2]=new int[4];

  for(i=0;i<3;i++){
    for(j=0;j<4;j++){
      cout<<B[i][j]<<" ";
    }
    cout<<endl;
  }
   cout<<"--------------";
  cout<<endl; 

  C=(int **)malloc(3*sizeof(int *));
  C[0]=new int[4];
  C[1]=new int[4];
  C[2]=new int[4];
  for(i=0;i<3;i++){
    for(j=0;j<4;j++){
      cout<<C[i][j]<<" ";
    }
    cout<<endl;
  } }  */



//OUTPUT :

/*
Arrays
0x7ffc9a600080
1
0x7ffc9a600084
2
0x7ffc9a600088
3
0x7ffc9a60008c
4
0x7ffc9a600090
5

Static & Dynamic array
1 2 3 4 5 
2 4 6 8 10 

increasing the size of Array
1 3 5 7 9

2-Dimensional Array
1 2 3 1 
4 5 6 4 
7 8 9 7 
--------------
0 0 0 0 
0 0 0 0 
0 0 0 0 
--------------
23946128 0 0 0 
0 0 0 0 
0 0 0 0 
*/

