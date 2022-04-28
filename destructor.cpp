#include<iostream>
using namespace std;

class student{
    int count = 0;
    public:
    student(){
        count =1;
    }
    student(int a){
        cout<<"We are in constructor"<<endl;
       count++;
       cout<<"The value of the count "<<count<<endl;
    }

    ~student(){
       count--;
       cout<<"This is the destructor and the value is "<<count<<endl;
    }

};

int main(){
    student a1(10);
    return 0;
}