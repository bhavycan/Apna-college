#include<iostream>
using namespace std;

class complax{
    private:
    int real,imag;
    public:

    complax(int r=0,int i=0){
        real = r;
        imag = i;
    }


    complax operator + (complax const &a){
    complax res;
        res.real = real + a.real;
        res.imag = imag + a.imag;
        return res;
    }

    void display(){
        cout<<real<<" +"<<imag<<"i"<<endl;
    }
};

int main(){
    complax a1(9,3);
    complax a2(1,7);
    complax a3 = a1 +a2;
    a3.display();
    return 0;
}

