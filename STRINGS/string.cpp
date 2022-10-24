#include <iostream>
using namespace std;

/*int main() {
  cout << "String DataStructure\n"<<endl;
  char s[]="welcome";
  char a[]="wELcOME";
  
  int i;
  for(i=0;s[i]!='\0';i++){
    }
  cout<<"Length of a String : "<<i<<endl; 
   for(i=0;s[i]!='\0';i++){
     s[i]-=32;
    }
  cout<<"Case Changing in String : "<<s<<endl;
  for(i=0;a[i]!='\0';i++){
    if(a[i]>=65 && a[i]<=90)
      a[i]+=32;
    else if(a[i]>=97 && a[i]<=122)
      a[i]-=32;
    }cout<<"Toggle Case : "<<a<<endl;

  char v[]="How are you?";
  int vcount=0,ccount=0,words=1,scount;
  for(i=0;v[i]!='\0';i++){
    if((v[i]=='a' ||v[i]=='e' || v[i]=='i' || v[i]=='o' || v[i]=='u')|| 
     (v[i]=='a' || v[i]=='e' || v[i]=='i' || v[i]=='o' || v[i]=='u')){
     vcount++; 
    }else if((v[i]>=65 && v[i]<=90)||(v[i]>=97 && v[i]<=122)){
      ccount++;
    }else if(v[i]==' ' && v[i-1]!=' '){  //2 case for double spacing
      words++;
    }else{
      scount++;
    }
  }cout<<"Vowels Counts : "<<vcount<<endl;
  cout<<"Consonents Counts  : "<<ccount<<endl;
  cout<<"Words counts : "<<words<<endl;
  cout<<"Special Counts : "<<scount<<endl;
  return 0;
  }
*/

/*
int Valid(char *name){
  int i;
  for(i=0;name[i]!='\0';i++){
    if(!(name[i]>=65 && name[i]<=90) && !(name[i]>=97 && name[i]<=122)
       && !(name[i]>=48 && name[i]<=57)){
      return 0;
       }
  }return 1; 
}
int main(){
  cout<<"validating a string"<<endl;
  char *name = "Anil123";
  if(Valid(name))
    cout<<"Validate String"<<endl;
  else
    cout<<"Invalid String"<<endl;
  
  char A[]="python";
  char B[7];
  int i,j,temp;
  for(i=0;A[i]!='\0';i++){
    
  }i=i-1;
  for(j=0;i>=0;i--,j++){
    B[j]=A[i];
  }B[j]='\0';
  cout<<"Reversing String : "<<B<<endl;
  
  for(j=0;A[j]!='\0';j++){

  }j=j-1;
  for(i=0;i<j;i++,j--){
    temp=A[i];
    A[i]=A[j];
    A[j]=temp;
  }cout<<"Swap Reversing String : "<<A<<endl;
  

  char C[]="painter";
  char D[]="painting";
   cout<<"Comparing String & Palindrome"<<endl;
  for(i=0,j=0;C[i]!='\0' && D[j]!='\0';i++,j++){
    if(C[i]!=D[j])
      break;
    }
  if(C[i]==D[j])
    cout<<"Equal"<<endl;
  else if(C[i]<D[j])
    cout<<"Smaller"<<endl;
  else
      cout<<"Greater"<<endl;

  char E[]="madam";
  char F[7];
  for(i=0;E[i]!='\0';i++){
    
  }i=i-1;
  for(j=0;i>=0;i--,j++){
    F[j]=E[i];
  }F[j]='\0';

  if(E[i]==F[j]){
    cout<<"It is Palindrome : "<<E<<endl;
  }else{
    cout<<"It is Not Palindrome : "<<E<<endl;
  }
}  */


/*int main(){
  cout<<"Finding Duplicates in string"<<endl;
  char A[]="finding";
  char B[]="medical";
  char C[]="dectmal";
  int H[26]={},i,j;
  int G[26]={0};

   for(i=0;A[i]!='\0';i++){
    H[A[i]-97]++;
  }
  for(i=0;i<26;i++){
    if(H[i]>1){
     printf("%c is repeated by %d times \n",i+65,H[i]);
      }  }  
  
   //Not Correct-----
  cout<<"Finding Two strings is Anagram or Not"<<endl;
  for(i=0;B[i]!='\0';i++){
    G[B[i]-97]++;
  }
  for(j=0;C[i]!='\0';j++){
    G[C[i]-97]--;
    
    if(G[C[j]-97]<0 || G[C[j]>1]){
      cout<<"It is Not Anagram"<<endl;
      break;
       } }
  if(C[j]=='\0'){
    cout<<"It is Anagram"<<endl;
    }
  return 0;
}  */

/*
void perm(char S[],int k){
  static int A[10]={0};
  static char Res[10];
  int i;
  if(S[k]=='\0'){
    Res[k]='\0';
    cout<<Res<<endl;
  }else{
    for(i=0;S[i]!='\0';i++){
      if(A[i]==0){
        Res[k]=S[i];  //result value store in S
        A[i]=1;    //then make it as 1
        perm(S,k+1);     //call its self for next 
        A[i]=0;         //revesing make it as 0
      }
    }}
}
void swap(int x,int y){
  int temp;
  temp=x;
  x=y;
  y=temp;
  }
void perm1(char S[],int l,int h){
  int i;
  if(l==h){
    cout<<S<<endl;
  }else{
    for(i=l;i<=h;i++){
      swap(S[l],S[i]);
      perm1(S,l+1,h);
      swap(S[l],S[i]);
    }
  }
}
int main(){
  cout<<"Permutation of String"<<endl;
   char S[]="ABC";
  perm(S,0);
  cout<<"------------------------------"<<endl;
  perm1(S,0,2);
  }
*/


//OUTPUT ::

/*

String DataStructure

Length of a String : 7
Case Changing in String : WELCOME
Toggle Case : WelCome
Vowels Counts : 5
Consonents Counts  : 4
Words counts : 3
Special Counts : 1

validating a string
Validate String
Reversing String : nohtyp
Swap Reversing String : nohtyp
Comparing String & Palindrome
Smaller
It is Palindrome : madam

Finding Duplicates in string
I is repeated by 2 times 
N is repeated by 2 times 
Finding Two strings is Anagram or Not

Permutation of String
ABC
ACB
BAC
BCA
CAB
CBA
------------------------------
ABC
ACB
BAC
BCA
CBA
CAB
*/

