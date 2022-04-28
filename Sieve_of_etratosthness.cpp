#include<iostream>
using namespace std;

void function(int n){

// starting from 2 we fund the multiple of it and marked then in the given range
// 4 6 8 10 12 ...

// after that we go for 3,
// now 6 is already marked so we start with 9
// 9 15 21 ...

// then 4 is already marked then we go for next 5
// here we will start with 25

// we can notice that the marking process is starts from the square of the number
// 3 -> 9
// 5 -> 25



//0 means it is unmarked
//1 means it is marked

    int arr[100] = {0};
    for (int i = 2; i < n; i++)     //starting with 2    
    {   
        if(arr[i] == 0){ // if it is unmarked
            for (int j = i*i; j < n; j+=i)      //then for every i^2 marked it
            {                                   // add the main number in it and mark it 
                arr[j] = 1;
            }
            
        }
    }

    for (int i = 2; i < n; i++)
    {
        if(arr[i] == 0){
            cout<<i<<" ";
        }
    }
    
    
}


int main(){
    int n =100;
    function(n);
    return 0;

}