//Quick sort
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findPartition(int arr[], int l, int h){
    
    int x = arr[h];
    int i = l-1;

    for(int j=l; j<h; j++){
        if(arr[j] < x){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[h]);
    return (i+1);
}
void quickSort(int arr[], int l, int h){

    if(l<h){
        int m = findPartition(arr, l, h);
        quickSort(arr, l, m-1);
        quickSort(arr, m+1, h);
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
    int n = 8;

    quickSort(arr, 0, n-1);
  
    cout << "Sorted: \n";
    printArray(arr, n);

    return 0;
}