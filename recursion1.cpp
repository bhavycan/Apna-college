#include<iostream>
using namespace std;

int sum(int n){
    if(n == 0){
        return 0;
    }
    int prevsum = sum(n-1);
    return n + prevsum;
}
// The function is calling himself to make the code littel shorter that the use 
// of recursion
// In this code:
// sum of n number = 1 + 2 + 3 + .... n-1 + n
// sum of n number = sum of n-1 number + n
// sum of n-1 number = sum of n-2 number + n-1
// .
// .
// .
// sum of 0 = 0

// main  ------------> return 10
// sum(4)------------> return 4 + 6 
// sum(3)------------> return 3 + 3
// sum(2)------------> return 2 + 1
// sum(1)------------> return 1 + 0         { return n + prevsum}
// sum(0)------------> return 0

int main(){
    int n;
    cin>>n;
    cout<<"The sum of the n number is: "<<sum(n)<<endl;
    return 0;
}