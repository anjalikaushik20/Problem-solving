//Kth smallest element
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findkthsmallest(vector<int> arr, int k){

    int n = arr.size();

    priority_queue<int> maxh;

    for(int i=0; i<n; i++){
        maxh.push(arr[i]);

        if(maxh.size()>k)
            maxh.pop();
    }
    return maxh.top();
}

int main(){
    vector<int> arr = {7,12,9,4,1,8,3,5,6,10};
    int k;

    cout<<"Enter position: ";
    cin>>k;

    cout<<findkthsmallest(arr, k);

    return 0;
}