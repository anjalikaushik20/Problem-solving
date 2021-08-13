//print factorial of a number
#include<iostream>
using namespace std;

int fact(int n){
    if(n == 1)
        return 1;
    else
        return n * fact(n-1);
}

//driver code
int main(){
    int n = 7;

    cout<<fact(n);

    return 0;
}