//Frequency Sort
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {4,4,4,4,3,3,1,1,1,2};
    int n = arr.size();

    map<int,int> mp;

    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    priority_queue<pair<int,int>> maxh;

    for(auto j=mp.begin(); j!=mp.end(); j++){
        maxh.push({j->second, j->first});
    }

    while(maxh.size()>0){
        int freq = maxh.top().first;
        int ele = maxh.top().second;

        for(int k=0; k<freq; k++){
            cout<<ele<<" ";
        }
        maxh.pop();
    }

}