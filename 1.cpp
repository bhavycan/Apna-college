#include<iostream>
using namespace std;

int sum(int n){
    if(n == 0){
        return 0;
    }
    int prevsum = sum(n-1);
    return n + prevsum;
}


int power(int a, int p){
    //base
    if(p == 0){
        return 1;
    }
    int prepower = power(a,p-1);
    return a * prepower;
}

int main(){
    int n;
    cout<<"Enter: ";
    cin>>n;
    cout<< sum(n)<<endl;
   
    int a,p;
    cout<<"Enter the number and the power: ";
    cin>>a>>p;
    cout<<"The answer is : "<<power(a,p)<<endl;
 return 0;
}