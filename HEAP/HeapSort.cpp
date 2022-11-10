#include <iostream>
using namespace std;

void Insert(int A[],int n){
  int temp,i=n;
  temp=A[i];
  while(i>1 && temp>A[i/2]){
    A[i]=A[i/2];
    i=i/2;
  }
  A[i]=temp;
}

int Delete(int A[],int n){
  int i,j,x,temp,del;
  del=A[1];
  x=A[n];
  A[1]=A[n];
  i=1,j=i*2;

  A[n]=del;  //Delete element store in last of array value

  while(j<n-1){
    if(A[j]<A[j+1])
      j=j+1;
    if(A[i]<A[j]){
      temp=A[i];
      A[i]=A[j];
      A[j]=temp;
      i=j;
      j=2*i;
    }else
      break;
  }return del;
}

int main() {
  cout << "Max-Heap : \n";

  int A[]={0,10,20,30,25,5,40,35};
   int i;
  for(i=2;i<=7;i++)
    Insert(A,i);
  
  for(i=1;i<=7;i++)
    cout<<A[i]<<" ";

  cout<<endl<<endl;
//Heap sort
  for(i=7;i>0;i--)
    Delete(A,i);

  cout<<"Heap Sort : ";
  for(i=1;i<=7;i++)
    cout<<A[i]<<" ";

  cout<<"\nDeleted Element : "<<Delete(A,7)<<endl;

   for(i=1;i<=7;i++)
    cout<<A[i]<<" ";
  
}
//OUTPUT::
/*
Max-Heap : 
40 25 35 10 5 20 30 

Heap Sort : 5 10 20 25 30 35 40 
Deleted Element : 5
40 10 20 25 30 35 5
*/


