//Connect ropes to optimize(minimize) cost
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int n = arr.size();
    int cost = 0;

    priority_queue<int, vector<int>, greater<int>> minh;

    for(int i=0; i<n; i++){
        minh.push(arr[i]);
    }

    while(minh.size()>=2){
        int len1, len2;
        len1 = minh.top();
        minh.pop();
        len2 = minh.top();
        minh.pop();

        cost += len1+len2;

        minh.push(len1+len2);
    }

    cout<<cost;

    return 0;
}