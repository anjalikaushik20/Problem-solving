//Insertion Sort
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertion(vector<int> v, int n){
    int key;
    
    for(int j=1; j<n; j++){
        key = v[j];
        int i = j-1;

        while(i>=0 && v[i]>key){
            v[i+1] = v[i];
            i = i-1;
        }

        v[i+1] = key;
    }
    
    cout<<"Sorted:"<<endl;
    for(int i=0; i<n; i++){
        cout<<v[i]<<"\t";
    }
}

int main(){
    vector<int> v = {4,8,9,5,2,0,3}; //sorted: 0,2,3,4,5,8,9
    int n = v.size();

    insertion(v,n);

    return 0;
}