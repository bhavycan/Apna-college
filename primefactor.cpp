#include<iostream>
using namespace std;

void primefactor(int n){
    int spf[100] = {0};         //spf is the smallest prime factore
    for (int i = 2; i <= n; i++)
    {
     spf[i] = i;     
                //will print the array with original number
    }

/*
    let us take the example of 12
    spf[12] = {2,3,4,5,6,7,8,9,10,11,12}

    check the condition noe ,
            i = 2,
                    spf[2] = 2 ----> true:
                            j = 4,
                                spf[4] = 4 ----> true:
                                spf[4] = 2
                            j = 6,
                                spf[6] = 6 ----> true:
                                spf[6] = 2
                            Same for 8,10,12
                                spf[8] = 2
                                spf[10] = 2
                                spf[12] = 2
            i = 3,
                    spf[3] = 3 ----> true:
                            j = 9,
                                spf[9] = 9 ---->true:
                                spf[9] = 3
                            j = 12,
                                spf[12] = 2 ---->false:
            and so on..

            now the array,
            spf[12] = { 2,3,2,5,2,7,2,3,2,11,2}

            now in while loop:
            cout: spf[12] = 2
            n= 12/spf[12] = 12/2 = 6
            cout: spf[6] = 2
            n = 6/spf[6] = 6/2 = 3
            cout: spf[3] = 3
            n = 3/spf[3] = 3/3 = 1 ---->loop ends     */


    for (int i =2; i <= n; i++)
    {
        if( spf[i] == i){
            for (int j = i*i; j <= n; j+=i) 
            {
                if(spf[j] == j){
                spf[j] = i;
                }
            }
            
        }
    }
    
    while (n != 1)
    {

        cout<<spf[n]<<" ";
        n = n/spf[n];

    }
    
    
}

int main(){
    int n =27;
    primefactor(n);
    return 0;

}