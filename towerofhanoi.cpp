#include<iostream>
using namespace std;

void fun(int n, char src, char des, char help){

if(n == 0 ){
    return;
}

    fun(n-1,src,des,help);
    cout<<"Move From "<<src<<" To : "<<des<<endl;
    fun(n-1,help,des,src);


}



int main(){
    int n;
    cin>>n;
    char src = 'a';
    char des = 'b';
    char helper = 'c';
    cout<<"The rules are following: "<<endl;
    fun(n,src,des,helper);

}