//Selection sort
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selsort(vector<int> v, int n){
    int min, loc;

    for(int i=0; i<n-1; i++){
        min = v[i];
        
        for(int j=i+1; j<n; j++){
            if(min>v[j]){
                min = v[j];
                loc = j;
            }
        }

        if(i != loc)
            swap(v[i], v[loc]);
    }

    //return v;
    cout<<"Sorted:"<<endl;
    for(int i=0; i<n; i++){
        cout<<v[i]<<"\t";
    }
}

int main(){
    vector<int> v = {4,8,9,5,2,0,3}; //sorted: 0,2,3,4,5,8,9
    int n = v.size();

    selsort(v,n);

    return 0;
}