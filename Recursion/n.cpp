//Print 1 to n using recursion
#include<iostream>
using namespace std;

void Display(int n){
    if(n == 1)
        cout<<1<<" ";
    else{
        Display(n-1);
        cout<<n<<" ";
    }
}

int main(){
    int n = 7;

    Display(n);

    return 0;
}