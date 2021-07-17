//Find K closest numbers to a given number in any order
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {5,6,7,8,9};
    int k;//int k = 3;
    int m = 7;
    int n = arr.size();

    cout<<"Enter k: "; //Number of closest numbers to be found
    cin>>k;

    priority_queue<pair<int,int>> maxhp;

    for(int i=0; i<n; i++){
        maxhp.push({abs(arr[i]-m), arr[i]});

        if(maxhp.size() > k)
            maxhp.pop();
    }

    while(maxhp.size()>0){
        cout<<maxhp.top().second<<" ";
        maxhp.pop();
    }
}