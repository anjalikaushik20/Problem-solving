//K-closest pairs to origin
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define pr pair<int, pair<int,int>>

int main(){
    vector<pair<int,int>> arr = {{1,3},{-2,2},{5,8},{0,3}};
    int k = 2;
    int dis;

    priority_queue<pr> maxh;

    for(int i=0; i<arr.size(); i++){

        dis = (arr[i].first * arr[i].first) + (arr[i].second * arr[i].second);
        maxh.push({dis, {arr[i].first, arr[i].second}});

        if(maxh.size()>k)
            maxh.pop();
    }

    while (maxh.size()>0){
        pair<int,int> temp = maxh.top().second;
        cout<<temp.first<<", "<<temp.second<<"; ";
        maxh.pop();
    }
    

    return 0;
}