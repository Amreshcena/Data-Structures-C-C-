#include <iostream>
using namespace std;

void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}

void Bubble(int A[],int n)
{
 int i,j,flag=0;
 
 for(i=0;i<n-1;i++)
 {
 flag=0;
 for(j=0;j<n-i-1;j++)
 {
 if(A[j]>A[j+1])
 {
 swap(&A[j],&A[j+1]);
 flag=1;
 }
 }
 if(flag==0)
 break;
 } 
}

void Insertion(int A[],int n){
  int i,j,x;
  for(i=1;i<n;i++){
    j=i-1;
    x=A[i];
    while(A[j]>-1 && A[j]>x){
      A[j+1]=A[j];
      j--;
    }
    A[j+1]=x;
  }
}

void Selection(int A[],int n){
  int i,j,k;
  for(i=0;i<n-1;i++){
    for(j=k=i;j<n;j++){
      if(A[j]<A[k])
        k=j;
    }
    swap(&A[i],&A[k]);
  }
}

int main()
{
 int A[]={11,13,7,12,16,9,24,5,10,3},n=10,i;

  //Bubble Sort
 Bubble(A,n);
 cout<<"Bubble Sort : ";
 for(i=0;i<10;i++)
  cout<<A[i]<<" ";

  cout<<"\n\n";

  //Insertion Sort
  Insertion(A,n);
  cout<<"Insertion Sort : ";
  for(i=0;i<10;i++)
   cout<<A[i]<<" ";

   cout<<"\n\n"; 

  //Selection Sort
  Selection(A,n);
  cout<<"Selection Sort : ";
  for(i=0;i<10;i++)
   cout<<A[i]<<" ";

   cout<<"\n\n";
  
 
 return 0;
  }

//OUTPUT:: 

  /*
  Bubble Sort : 3 5 7 9 10 11 12 13 16 24 

  Insertion Sort : 3 5 7 9 10 11 12 13 16 24 

  Selection Sort : 3 5 7 9 10 11 12 13 16 24 

*/