#include<iostream>
using namespace std;

//function to print fibonacci series
void fibo(int n){

    int n1 = 0, n2 = 1, n3;
    cout<<n1<<" "<<n2<<" ";

    for(int i=2; i<n; i++){
        n3 = n1+n2;
        cout<<n3<<" ";
        n1 = n2;
        n2 = n3;
    }
}
//function to print fibonacci number
int fibonum(int n){
    if(n<0)
        return -1;
    else if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else return fibonum(n-1)+fibonum(n-2);
}

//driver code
int main(){
    int n = 9;
    fibo(n);
    cout<<endl<<"Sum: "<<fibonum(n);
    return 0;
}