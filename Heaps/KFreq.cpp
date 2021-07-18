//Print top k frequent numbers
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,1,1,3,3,2,4};
    int n = arr.size();
    int k = 2;

    unordered_map<int,int> mp;

    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minh;

    for(auto j=mp.begin(); j!=mp.end(); j++){
        minh.push({j->second, j->first});

        if(minh.size()>k)
            minh.pop();
    }

    while(!minh.empty()){
        cout<<minh.top().second<<" ";
        minh.pop();
    }
}