//Print 1 to n and n to 1 using recursion
#include<iostream>
using namespace std;
//print 1 to n
void DisplayOne(int n){
    if(n == 1)
        cout<<1<<" ";
    else{
        DisplayOne(n-1);
        cout<<n<<" ";
    }
}
//print n to 1
void DisplayTwo(int n){
    if(n == 1)
        cout<<1<<" ";
    else{
        cout<<n<<" ";
        DisplayTwo(n-1);
    }
}

//driver code
int main(){
    int n = 7;

    DisplayOne(n);
    cout<<endl;
    DisplayTwo(n);

    return 0;
}