//sort an array with recursion
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//insert function
void insertEle(vector<int> &v, int m){
    int n = v.size(), val;

    if(n == 0 || m >= v[n-1])
        v.push_back(m);
    else{
        val = v[n-1];
        v.pop_back();
        insertEle(v, m);
        v.push_back(val);
    }
}
//sort function
void sortArr(vector<int> &a){
    int n = a.size(), temp;

    if(n == 1)
        exit(1);
    else{
        temp = a[n-1];
        a.pop_back();
        sortArr(a);
        insertEle(a, temp);
    }
}
//display vector
void displayVec(vector<int> v){
    int n = v.size();
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}

//driver code
int main(){
    vector<int> arr = {2,3,7,6,4,5,9}; //sorted: 2,3,4,5,6,7,9

    sortArr(arr);
    displayVec(arr);

    return 0;
}

//for now, there's some issue in printing the result
//will sort it out soon!