#include<iostream>
using namespace std;

int setBit(int n,int pos){              //get the bit at the position 
    return ((n & (1<<pos)) != 0);
}


void unique(int arr[], int n){
    int xorsum = 0;
for(int i =0; i<n;i++){
 xorsum = xorsum ^ arr[i];              //normal unique number finding
}
int setbit = 0;
int pos = 0;
int tempxor = xorsum;
while(setbit != 1){
    setbit = xorsum &1;
    pos ++;
    xorsum = xorsum >> 1;
}
int newxor = 0;
for (int i = 0; i < n; i++)
{
    if (setBit(arr[i],pos-1))
    {
        newxor = newxor ^ arr[i];
    }
    
}
cout<<newxor<<endl;
cout<<(tempxor ^ newxor)<< endl;

}



int main(){
    int arr[6] ={1,1,2,3,5,5};
    int n =6;
    
    unique(arr, n);
    return 0;
}