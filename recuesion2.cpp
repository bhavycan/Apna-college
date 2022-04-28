#include<iostream>
using namespace std;

int power(int n,int p){
    if(p ==0 ){
        return 1; //base condition
    }
    int prevpower = power(n,p-1);
    return n * prevpower;
}


int main(){
    int n,p;
    cout<<"Enter the number and its power: ";
    cin>>n>>p;
    
    cout<<"The answer is: "<<power(n,p)<<endl;
    return 0;
}