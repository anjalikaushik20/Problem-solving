//print number of factors of a number - optimised
#include<iostream>
#include<math.h>
using namespace std;

int printNo(int n){
    int c = 0;

    for(int i=1; i<=sqrt(n); i++){
        if(n%i == 0){
            c++;
            if(i != n/i)
                c++;
        }
    }

    return c;
}

int main(){
    int n = 36;

    cout<<"No. of factors: "<<printNo(n);
    return 0;
}