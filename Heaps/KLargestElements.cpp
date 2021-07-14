// Print K largest elements
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int KLarge(vector<int> arr, int k){

    priority_queue<int, vector<int>, greater<int>> minh;
    int n = arr.size();

    for(int i=0; i<n; i++){
        minh.push(arr[i]);

        if(minh.size() > k)
            minh.pop();
    }

    while (minh.size()>0){
        cout<<minh.top()<<"\t";
        minh.pop();
    }
    
}

int main(){
    vector<int> arr = {30,67,28,47,19};
    int k;

    cout<<"Enter k: ";
    cin>>k;

    return KLarge(arr, k);

    return 0;
}