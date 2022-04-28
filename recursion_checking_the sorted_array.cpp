#include<iostream>
using namespace std;


bool check(int arr[],int n){
    if(n==1){
        return 1;
    }
    bool restarray = check(arr+1,n+1);
    if(arr[0]<arr[1] && restarray){
        return 1;
    }
}

int main(){
  int n=5;
    int arr[5];
    cout<<"Enter the element of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<< i+1<<"> ";
        cin>>arr[i];
        cout<<endl;
    }
    if (check(arr,n)){
        cout<<"Check array: True "<<endl;
    }
    return 0;
}