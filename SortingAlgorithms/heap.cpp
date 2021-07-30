//Heap sort
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i){

    int large = i;
    int l = 2*i+1;
    int r = 2*i+2;

    if(l<n && arr[l]>arr[large])
        large = l;

    if(r<n && arr[r]>arr[large])
        large = r;
    
    if(large != i){
        swap(arr[i], arr[large]);
        heapify(arr, n, large);
    }
}

void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
  
    // One by one extract an element from heap
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);
  
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
  
int main()
{
    int arr[] = {8,3,6,9,5,4,0,1};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    heapSort(arr, n);
  
    cout << "Sorted: \n";
    printArray(arr, n);
}