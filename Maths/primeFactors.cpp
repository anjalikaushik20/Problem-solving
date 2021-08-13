#include<iostream>
#include<math.h>
using namespace std;

//function
void primeFac(int n){

    //number of 2s
    while(n%2 == 0){
        cout<<2<<" ";
        n = n/2;
    }

    //other numbers
    //n is odd now, so skip one element, hence i+2
    for(int i=3; i<sqrt(n); i+2){
        while(n%i == 0){
            cout<<i<<" ";
            n = n/i;
        }
    }

    //to check if n is a pime number greater than 2
    if(n>2)
        cout<<n<<" ";
}

//driver code
int main(){
    int n = 60;

    primeFac(n);

    return 0;
}