//Merge Sort
//Implementing merge sort is easier with 'arrays' than with 'vectors'.
#include<iostream>
using namespace std;

void display(int *arr, int size) {
   for(int i = 0; i<size; i++)
      cout << arr[i] << " ";
   cout << endl;
}

void merge(int *array, int l, int m, int r) {
   int i, j, k;
   int n1 = m-l+1; 
   int n2 = r-m;
   int L[n1], R[n2];
   
   //copy
   for(i = 0; i<n1; i++)
      L[i] = array[l+i];
   for(j = 0; j<n2; j++)
      R[j] = array[m+1+j];
    
   i = 0; j = 0; k = l;
   //merge
   while(i < n1 && j<n2) {
      if(L[i] <= R[j]) {
         array[k] = L[i];
         i++;
      }else{
         array[k] = R[j];
         j++;
      }
      k++;
   }
   while(i<n1) {       //extra elements
      array[k] = L[i];
      i++; k++;
   }
   while(j<n2) {     //extra elements
      array[k] = R[j];
      j++; k++;
   }
}
void mergeSort(int *array, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
      // Sort first and second arrays
      mergeSort(array, l, m);
      mergeSort(array, m+1, r);
      merge(array, l, m, r);
   }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];     //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   mergeSort(arr, 0, n-1);     //(n-1) for last index
   cout << "Array after Sorting: ";
   display(arr, n);
}