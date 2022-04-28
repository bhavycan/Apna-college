#include<iostream>
using namespace std;

int divisible(int n, int a, int b){
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);
    return c1 +c2 -c3;
}

// Example: 
//  in the range of 40:
//  5 's multiple : 5, 10, 15, 20, 25, 30, 35, 40
//  7 's multiple : 7, 14, 21, 28, 35

// Here total is 13 but "35" is counted twice so we just removed it

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    cout<<divisible(n,a,b);
    return 0;
}