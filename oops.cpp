#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    bool gender;
    void getdata(){
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the age: ";
        cin>>age;
    }
    void printdata(){
        cout<<"Enter the name: "<<name<<endl;
        cout<<"Enter the age: "<<age<<endl;      
    }

    Student(string s, int ag, bool b){
        name=s;
        age=ag;
        gender =b;
    }

    Student(){
        cout<<"default constructor is called"<<endl;
    }

    ~Student(){
        cout<<"Desructore is called"<<endl;
    }

    Student(Student &a){
        name= a.name;
        age=a.age;
        gender=a.gender;
    }

    bool operator == (Student &a){
        if(name ==a.name && age ==a.age){
            return 1;
        }
        return 0;
    }
    
};

int main(){
    Student a("Bhavy",25,true);
    Student b =a;           //when  you are calling the copy constructore, declaration must be in the same line
    b.printdata();          
    if(b==a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }
    return 0;
}