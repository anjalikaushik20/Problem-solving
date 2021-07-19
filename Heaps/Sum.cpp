//Sum of elements between K1th smallest and K2th smallest elements

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Kth smallest element
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
    int k1=4, k2=8;
    int s, f, sum = 0;
    int n = arr.size();

    s = findkthsmallest(arr, k1);
    f = findkthsmallest(arr, k2);

    for(int i=0; i<n; i++){
        if(arr[i]>s && arr[i]<f)
            sum += arr[i];
    }

    cout<<sum;

    return 0;
}