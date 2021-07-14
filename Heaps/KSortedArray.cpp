// Sort a K-sorted array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {6,5,3,2,8,10,9};
    int k=3;

    vector<int> v;
    int n = arr.size();
    int m;

    priority_queue<int, vector<int>, greater<int>> minh;

    for(int i=0; i<n; i++){
        
        minh.push(arr[i]);

        if(minh.size()>k){
            m = minh.top();
            minh.pop();
            v.push_back(m);
        }

    }

    while(!minh.empty()){
        m = minh.top();
        minh.pop();
        v.push_back(m);
    }

    for (int i=0;i<arr.size();i++){
      cout<<v[i]<<" ";
    }
}