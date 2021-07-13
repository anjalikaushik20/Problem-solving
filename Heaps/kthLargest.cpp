//Kth largest element
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findkthlargest(vector<int> arr, int k){
    int n = arr.size();

    priority_queue <int, vector<int>, greater<int> > minh;

    for(int i=0; i<n; i++){
        minh.push(arr[i]);

        if(minh.size()>k)
            minh.pop();
    }

    return minh.top();
}
int main(){
    
    vector<int> arr = {56, 89, 44, 65, 33};
    int k;

    cout<<"Enter k: ";
    cin>>k;

    cout<<findkthlargest(arr, k);
}