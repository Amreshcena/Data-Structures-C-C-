#include <iostream>
using namespace std;

/*int main() {
  cout<<"Single Missing Element in the Array :\n";
  int A[]={1,2,3,4,5,7,8,9,10,11,12};
  int sum=0,i;
  for(i=0;i<11;i++){
    sum+=A[i];
  }
  int S,n=12;
  S=n*(n+1)/2;
  cout<<"Missing Number : "<<S-sum<<endl;

  int B[]={6,7,8,9,10,11,12,14,15,16,17};
  int diff,l=6,h=17,n1=11;
  diff=l-0;
  for(i=0;i<n;i++){
    if((B[i]-i)!=diff){
      cout<<"Missing Number is : "<<i+diff<<endl;
      break;
    }
  } }  */

/*
int main(){
   cout<<"Multiple missing elements in sorted array : "<<endl;
  int A[]={6,7,8,9,11,12,15,16,17,18,19};
  int diff,l=6,h=19,n=11,i;
  diff=l-0;
  for(i=0;i<n;i++){
    if((A[i]-i)!=diff){
      while(diff<A[i]-i){ 
        cout<<i+diff<<" ";
        diff++;
      }}
    } 
   cout<<endl<<"Missing elements in unsorted arrays : "<<endl;
  int B[]={3,7,4,9,12,6,1,11,2,10};
  int l1=1,h1=12,n1=10,j;
  int H[13]={0};
  for(j=0;j<n1;j++){
    H[B[j]]++;
  }
  for(j=l1;j<=h1;j++){
    if(H[j]==0)
      cout<<j<<" ";
  }
}   */
/*
int main(){
  cout<<"Finding & Counting Duplictes elements in sorted array : "<<endl;
  int A[]={3,6,8,8,10,12,15,15,15,20};
   int H[20]={0};
  int i,n=10;
  for(i=0;i<n;i++){
    H[A[i]]++;
  }
  for(i=0;i<=20;i++){
    if(H[i]>1)
      printf("Number : %d ,count : %d \n",i,H[i]);
  }
  cout<<endl<<"Finding Duplicates elements in Unsorted array : "<<endl;
  int B[]={7,3,6,4,6,5,6,7,2,7};
  int H1[8]={0};

  for(i=0;i<n;i++){
    H1[B[i]]++;
  }
  for(i=0;i<=8;i++){
    if(H1[i]>1)
      printf("Number : %d ,count : %d \n",i,H1[i]);
  }
}  */

/*
int main(){
  cout<<"finding a pair with sum k : "<<endl; //A+B=k
     int A[]={6,3,8,10,16,7,5,2,9,14};
    int i,j,k=10,n=10;
   for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
      if(A[i]+A[j]==k){
        cout<<A[i]<<"+"<<A[j]<<"="<<k<<endl;
      }
    }
  } */
    /*  //By using hash table
    int H[16]={0},k=10;
    for(int i=0;i<10;i++){
    if((H[k-A[i]])!=0){
      printf("%d+%d=%d",A[i],k-A[i],k);
    }
    H[A[i]]++; 
  } 
}  */

/*
int main(){
  cout<<"Finding pair with sum k in sorted array : "<<endl;
  int A[]={1,3,4,5,6,8,9,10,11,12},n=10,k=10;
   int i=0,j=n-1;
  while(i<j){
    if(A[i]+A[j]==k){
      cout<<A[i]<<"+"<<A[j]<<"="<<k<<endl;
      i++;
      j--;
    }else if(A[i]+A[j]<k){
      i++;
    }else
      j--;
  }
  cout<<"Finding Max and Min in element in an array : "<<endl;
  int B[]={5,8,3,9,6,2,10,7,-1,4};
  int min=B[0];
  int max=B[0];
  for(i=1;i<n;i++){
    if(B[i]<min)
      min=B[i];
    else if(B[i]>max)
      max=B[i];
  }
  cout<<"Minimum value : "<<min<<endl;
  cout<<"Maximum value : "<<max<<endl;
}
*/


//OUTPUT : 

/*

Single Missing Element in the Array :
Missing Number : 6
Missing Number is : 13

Multiple missing elements in sorted array : 
10 13 14 
Missing elements in unsorted arrays : 
5 8 

Finding & Counting Duplictes elements in sorted array : 
Number : 8 ,count : 2 
Number : 15 ,count : 3 

Finding Duplicates elements in Unsorted array : 
Number : 6 ,count : 3 
Number : 7 ,count : 3

finding a pair with sum k : 
3+7=10
8+2=10

Finding pair with sum k in sorted array : 
1+9=10
4+6=10

Finding Max and Min in element in an array : 
Minimum value : -1
Maximum value : 10


*/


