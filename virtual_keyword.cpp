#include<iostream>
using namespace std;

class teacher{
    public:
    int numofteacher = 0;

    teacher(){};

    teacher(bool a){
       if(a ==1 ){
           numofteacher++;
       }
    }
     virtual void display(){
       cout<<"The number of teacher is: "<<numofteacher <<endl;
    }

};

class student: public teacher{
    public:
    int numofstudent = 5;
    void display(){
        cout<<"the number of student is still "<<numofstudent<<endl;
    }
};

int main(){
        bool a;
        cout<<"Want to add the new teacher?";
        cin>>a;
         teacher *t1;
        student s;
        t1 = &s;
        t1 ->display();
        return 0; 

}