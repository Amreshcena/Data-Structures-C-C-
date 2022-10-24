#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

/*struct Array{
  int *A;
  int size;
  int length; 
};
void display(struct Array arr){
  int i;
  cout<<"Elements are : \n";
  for(i=0;i<arr.length;i++)
    cout<<arr.A[i];
}
int main() {
  cout <<"Arrays ADT"<<endl;
  struct Array arr;
  int n,i;
  cout<<"Enter size of Array:"<<endl;
  cin>>arr.size;
  arr.A=new int[arr.size];
  arr.length=0;

  cout<<"Enter the numbers : \n";
  cin>>n;

  cout<<"Enter all the Elements : \n";
  for(i=0;i<n;i++)
    cin>>arr.A[i];
  arr.length=n;
  
  display(arr);
}  */


/*
struct Array{
  int A[20];
  int size;
  int length; 
};
void display(struct Array arr){
  int i;
  cout<<"\nElements are : \n";
  for(i=0;i<arr.length;i++)
    cout<<arr.A[i];
}
void Append(struct Array *arr,int x){
  if(arr->length<arr->size){
    arr->A[arr->length++]=x;
    }
}
void Insert(struct Array *arr,int index,int x){
  if(index>=0 && index<=arr->length){
    for(int i=arr->length;i>index;i--)
      arr->A[i]=arr->A[i-1];
    arr->A[index]=x;
    arr->length++;
  }
}
void Delete(struct Array *arr,int index){
  int x=0,i;
  if(index>=0 && index<=arr->length-1){
    x=arr->A[index];
    for(i=index;i<=arr->length-1;i++){
      arr->A[i]=arr->A[i+1];
    }
    arr->length--;
    return x;
  }return 0;
}
int main(){
  cout<<"Append,Insert,Delete element in array"<<endl;
  struct Array arr={{1,2,4,5,6},20,5};
  Append(&arr,7); 
  Insert(&arr,2,3);
  Delete(&arr,0);
  display(arr);
}  */


/*
struct Array{
  int A[20];
  int size;
  int length; 
};
void display(struct Array arr){
  int i;
  cout<<"\nElements are : \n";
  for(i=0;i<arr.length;i++)
    cout<<arr.A[i];
}
void swap(int *x,int *y){
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
int Linear(struct Array *arr,int key){
  for(int i=0;i<arr->length;i++){
    if(key==arr->A[i]){
      swap(&arr->A[i],&arr->A[0]); //move to head
      //swap(&arr->A[i],&arr->A[i-1]); //tranposition
      return i;
    }
  }return -1;
}
int Binary(struct Array arr,int key){
  int l=0,h,mid;
  h=arr.length-1;
  while(l<=h){
    mid=(l+h)/2;
    if(key==arr.A[mid]){
      return mid;
    }else if(key<arr.A[mid]){
      h=mid-1;
    }else{
      l=mid+1;
    }
  }return -1;
}
int RBinary(int a[],int l,int h,int key){
  int mid=(l+h)/2;
  if(l<=h){
    if(key==a[mid])
      return mid;
    else if(key<a[mid])
      return RBinary(a,l,mid-1,key);
    else
      return RBinary(a,mid+1,h,key);
  }return -1;
}
int main(){
  cout<<"Linear search & Binary Search"<<endl<<endl;
  struct Array arr={{2,3,4,5,6},10,5};
  //cout<<"Linear Search : "<<Linear(&arr,5)<<endl;
  cout<<"Binary Search : "<<Binary(arr,5)<<endl;
  cout<<"Recursive Binary Search : "; 
  cout<<RBinary(arr.A,0,arr.length,6)<<endl;
  display(arr);
}  */


/*
struct Array{
  int A[20];
  int size;
  int length; 
};
void display(struct Array arr){
  int i;
  cout<<"\nElements are : \n";
  for(i=0;i<arr.length;i++)
    cout<<arr.A[i];
}
int Get(struct Array arr,int index){
  if(index>=0 && index<arr.length)
    return arr.A[index];
  return -1;
}
void Set(struct Array *arr,int index,int x){
  if(index>=0 && index<arr->length)
    arr->A[index]=x; 
}
int Max(struct Array arr){
  int max=arr.A[0],i;
  for(i=1;i<arr.length;i++){
    if(arr.A[i]>max)
      max=arr.A[i];
  }return max;
}
int Min(struct Array arr){
  int min=arr.A[0],i;
  for(i=1;i<arr.length;i++){
    if(arr.A[i]<min)
      min=arr.A[i];
  }return min;
}
int Sum(struct Array arr){
  int sum=0,i;
  for(i=0;i<arr.length;i++)
    sum+=arr.A[i];
  return sum;
}
float Avg(struct Array arr){
  return (float)Sum(arr)/arr.length;
}

int main(){
  cout<<"get,set,sum,max,min,Avg in arrays"<<endl<<endl;
  struct Array arr ={{1,3,4,5,6},10,5};

  cout<<Get(arr,1)<<endl;
  Set(&arr,0,2);
  cout<<"Maximum : "<<Max(arr)<<endl;
  cout<<"Minimum : "<<Min(arr)<<endl;
  cout<<"Total : "<<Sum(arr)<<endl;
  cout<<"Average : "<<Avg(arr)<<endl;

  display(arr);
}   */


/*
struct Array{
  int A[20];
  int size;
  int length; 
};
void display(struct Array arr){
  int i;
  cout<<"\nElements are : \n";
  for(i=0;i<arr.length;i++)
    cout<<arr.A[i]<<" ";
}
void Reverse(struct Array *arr){
  int *B;
  int i,j;
  B=(int *)malloc(arr->length*sizeof(int));
  for(i=arr->length-1,j=0;i>=0;i--,j++)
    B[j]=arr->A[i];
  for(i=0;i<arr->length;i++)
    arr->A[i]=B[i];
}
void swap(int *x,int *y){
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
void Reverse1(struct Array *arr){
  int i,j;
  for(i=0,j=arr->length-1;i<j;i++,j--)
    swap(&arr->A[i],&arr->A[j]);
}
void Insert(struct Array *arr,int x){
  int i=arr->length-1;
  if(arr->length==arr->size)
    return;
  while(i>=0 && arr->A[i]>x){
    arr->A[i+1]=arr->A[i];
    i--;
  }
  arr->A[i+1]=x;
  arr->length++;
}
int Sort(struct Array arr){
  for(int i=0;i<arr.length-1;i++){
    if(arr.A[i]>arr.A[i+1])
      return 0;   //false
  }return 1;   //True
}

void Rearrange(struct Array *arr){
  int i=0,j;
  j=arr->length-1;

  while(i<j){
    while(arr->A[i]<0)i++;
    while(arr->A[j]>=0)j--;
    if(i<j)swap(&arr->A[i],&arr->A[j]);
  }
}
int main(){
  cout<<"Revesing Array & Sorting elements"<<endl;
  struct Array arr={{2,-1,0,4,-3,-6},10,6};
  Reverse(&arr);
  Reverse1(&arr);
  Insert(&arr,5);
  cout<<"Sorted(1) Or Not(0) : "<<Sort(arr)<<endl;
  display(arr);
  Rearrange(&arr);   
  display(arr); 
}   */


/*
struct Array{
  int A[20];
  int size;
  int length; 
};
void display(struct Array arr){
  int i;
  cout<<"Elements are : \n";
  for(i=0;i<arr.length;i++)
    cout<<arr.A[i]<<" ";
}
struct Array* Merge(struct Array *arr1,struct Array *arr2){
  int i,j,k;
  i=j=k=0;
  struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
  while(i<arr1->length && j<arr2->length){
    if(arr1->A[i]<arr2->A[j])
      arr3->A[k++]=arr1->A[i++];
    else
      arr3->A[k++]=arr2->A[j++];
  }
  for(;i<arr1->length;i++)
    arr3->A[k++]=arr1->A[i];
  for(;i<arr2->length;j++)
    arr3->A[k++]=arr2->A[i];
  arr3->length=arr1->length+arr2->length;
  arr3->size=10;
  return arr3;
}
struct Array* Union(struct Array *arr1,struct Array *arr2){
  int i,j,k;
  i=j=k=0;
  struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
  while(i<arr1->length && j<arr2->length){
    if(arr1->A[i]<arr2->A[j])
      arr3->A[k++]=arr1->A[i++];
    else if(arr2->A[j]<arr1->A[i])
      arr3->A[k++]=arr2->A[j++];
    else{
      arr3->A[k++]=arr1->A[i++];
      j++;
    }
  }
  for(;i<arr1->length;i++)
    arr3->A[k++]=arr1->A[i];
  for(;i<arr2->length;j++)
    arr3->A[k++]=arr2->A[i];
  arr3->length=k;
  arr3->size=10;
  return arr3;
}
struct Array* Intersection(struct Array *arr1,struct Array *arr2){
  int i,j,k;
  i=j=k=0;
  struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
  while(i<arr1->length && j<arr2->length){
    if(arr1->A[i]<arr2->A[j])
     i++;
    else if(arr2->A[j]<arr1->A[i])
      j++;
    else{
      arr3->A[k++]=arr1->A[i++];
      j++;
    }
  }
  arr3->length=k;
  arr3->size=10;
  return arr3;
}
struct Array* Difference(struct Array *arr1,struct Array *arr2){
  int i,j,k;
  i=j=k=0;
  struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
  while(i<arr1->length && j<arr2->length){
    if(arr1->A[i]<arr2->A[j])
      arr3->A[k++]=arr1->A[i++];
    else if(arr2->A[j]<arr1->A[i])
      j++;
    else{
      i++;
      j++;
    }
  }
  for(;i<arr1->length;i++)
    arr3->A[k++]=arr1->A[i];
  
  arr3->length=k;
  arr3->size=10;
  return arr3;
}
int main(){
  struct Array arr1={{1,3,5,7,12},10,5};
  struct Array arr2={{2,3,6,7,11},10,5};
  struct Array *arr3;
  arr3=Merge(&arr1,&arr2);
  cout<<"Merge Sort ";
  display(*arr3);
  arr3=Union(&arr1,&arr2);
  cout<<endl<<endl<<"Union Sort (AuB) ";
  display(*arr3);
  arr3=Intersection(&arr1,&arr2);
  cout<<endl<<endl<<"Intersection Sort (AnB) ";
  display(*arr3);
  arr3=Difference(&arr1,&arr2);
  cout<<endl<<endl<<"Difference Sort (A-B) ";
  display(*arr3);
  return 0;
}  */



