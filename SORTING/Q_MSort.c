
#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int partition(int A[], int l, int h) {
  int pivot = A[l];
  int i = l, j = h;

  do {
    do {
      i++;
    } while (A[i] <= pivot);
    do {
      j--;
    } while (A[j] > pivot);

    if (i < j)
      swap(&A[i], &A[j]);
  } while (i < j);

  swap(&A[l], &A[j]);
  return j;
}

void QuickSort(int A[], int l, int h) {

  int j;

  if (l < h) {
    j = partition(A, l, h);
    QuickSort(A, l, j);
    QuickSort(A, j + 1, h);
  }
}

void Merge(int A[], int l, int mid, int h) {
  int i = l, j = mid + 1, k = l;
  int B[100];

  while (i <= mid && j <= h) {
    if (A[i] < A[j])
      B[k++] = A[i++];
    else
      B[k++] = A[j++];
  }
  for (; i <= mid; i++)
    B[k++] = A[i];
  for (; j <= h; j++)
    B[k++] = A[j];

  for (i = l; i <= h; i++)
    A[i] = B[i];
}

void RMergeSort(int A[], int l, int h) {
  int mid;
  if (l < h) {
    mid = (l + h) / 2;
    RMergeSort(A, l, mid);
    RMergeSort(A, mid + 1, h);
    Merge(A, l, mid, h);
  }
}

void IMergeSort(int A[], int n) {
  int p, l, h, mid, i;
  for (p = 2; p <= n; p = p * 2) {
    for (i = 0; i + p - 1 < n; i = i + p) {
      l = i;
      h = i + p - 1;
      mid = (l + h) / 2;
      Merge(A, l, mid, h);
    }
    if (n - i > p / 2) {
      l = i;
      h = i + p - 1;
      mid = (l + h) / 2;
      Merge(A, l, mid, n - 1);
    }
  }
  if (p / 2 < n) {
    Merge(A, 0, p / 2 - 1, n - 1);
  }
}

int main() {
  int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3}, n = 10, i;

  // Quik Sort

  QuickSort(A, 0, n);

  printf("Ouick Sort : ");

  for (i = 0; i < 10; i++)
    printf("%d ", A[i]);
  printf("\n\n"); 

  // Recursive MergeSort

  RMergeSort(A, 0, 9);

  printf("Recursive MergeSort : ");
  for (i = 0; i < 10; i++)
    printf("%d ", A[i]);
  printf("\n\n");

   //Iterative MergeSort
  
  IMergeSort(A, n);
  printf("Iterative MergeSort : ");
 for(i=0;i<n;i++)
 printf("%d ",A[i]);
 printf("\n\n"); 

  return 0;
}

// OUTPUT::
/*Ouick Sort : 3 5 7 9 10 11 12 13 16 24 

Recursive MergeSort : 3 5 7 9 10 11 12 13 16 24 

Iterative MergeSort : 3 5 7 9 10 11 12 13 16 24
*/


