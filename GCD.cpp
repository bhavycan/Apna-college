#include<iostream>
using namespace std;


//This is the uclid priciple for finding the dcg in easiest way

// 42 = 2 * 2 *2 *3
// 24 = 2 * 3 *7
// gcd = 6

// now let us subtract the number
// 42 - 24 = 18  --->
// 24 - 18 = 6   --->
// 18 - 6 = 12   --->  all have the same gcd : 6
// 12 - 6 = 6    --->
// 6 - 6 = 0

// the same case with module
// 42 % 24 = 18
// 24 % 18 = 6
// 18 % 6 = 0


int gcd(int a,int b){
    while (b != 0)
    {
    int rem = a%b;
    a=b;
    b=rem; 
    }
    return a;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}