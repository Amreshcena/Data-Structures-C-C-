#include <iostream>
using namespace std;
/*
class Diagonal {
private:
  int *A;
  int n;

public:
  Diagonal() {
    n = 2;
    A = new int[2];
  }
  Diagonal(int n) {
    this->n = n;
    A = new int[n];
  }
  ~Diagonal() { delete[] A; }
  void Set(int i, int j, int x);
  int Get(int i, int j);
  void display();
};
void Diagonal::Set(int i, int j, int x) {
  if (i == j)
    A[i - 1] = x;
}
int Diagonal::Get(int i, int j) {
  if (i == j)
    return A[i - 1];
  return 0;
}
void Diagonal::display() {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j)
        cout << A[i] << " ";
      else
        cout << "0 ";
    }
    cout << endl;
  }
}

int main() {
  cout << "MATRIX\n" << endl;
  cout << "Diagonal Matrix" << endl;
  Diagonal d(4);
  d.Set(1, 1, 1);
  d.Set(2, 2, 2);
  d.Set(3, 3, 3);
  d.Set(4, 4, 4);

  d.display();
  return 0;
}   */

class LowerTri {
private:
  int *A;
  int n;

public:
  LowerTri() {
    n = 2;
    A = new int[2*(2+1)/2];
  }
  LowerTri(int n) {
    this->n = n;
    A = new int[n*(n+1)/2];
  }
  ~LowerTri() { delete[] A; }
  void Set(int i, int j, int x);
  int Get(int i, int j);
  void display();
   int GetDimention(){ return n; }
};
void LowerTri::Set(int i, int j, int x) {
  if (i>=j)
    A[i*(i-1)/2+j-1] = x;  //CM[n*(j-1)-(j-2)*(j-1)/2+j-1]
}
int LowerTri::Get(int i, int j) {
  if (i>=j)
    return A[i*(i-1)/2+j-1];  //CM[n*(j-1)-(j-2)*(j-1)/2+j-1]
  return 0;
}
void LowerTri::display() {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i >= j)
        cout << A[i*(i-1)/2+j-1] << " ";  
      else           //CM[n*(j-1)-(j-2)*(j-1)/2+j-1]
        cout << "0 ";
    }
    cout << endl;
  }
}

int main() {
  int d;
  cout << "Enter Dimentions : " << endl;
  cin>>d;
  LowerTri lm(d);
  int x;
  cout<<"Enter all Elements : "<<endl;
  for (int i = 1; i <= d; i++) {
    for (int j = 1; j <= d; j++) {
       cin>>x;
       lm.Set(i,j,x);
      }}
  cout<<endl<<endl;
  cout<<"Lower Triangular matrix for Row Major : "<<endl;
  lm.display();
  return 0;
}


