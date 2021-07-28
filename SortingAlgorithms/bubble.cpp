//Bubble sort
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubblesort(vector<int> v, int n){

    for(int i=1; i<n-1; i++){
        for(int j=0; j<n-i; j++){
            if(v[j]>v[j+1])
                swap(v[j], v[j+1]);
        }
    }

    cout<<"Sorted:"<<endl;
    for(int i=0; i<n; i++){
        cout<<v[i]<<"\t";
    }
}

int main(){
    vector<int> v = {4,8,9,5,2,0,3}; //sorted: 0,2,3,4,5,8,9
    int n = v.size();

    bubblesort(v,n);

    return 0;
}