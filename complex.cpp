#include<iostream>
using namespace std;
class complex{
    int real;
    int imaginary;
    public:
    complex():real(0),imaginary(0){}
    complex(int a,int b){real=a;imaginary=b;}
    int getreal(){
        return real;
    }
    int getim(){
        return imaginary;
    }
    void display(){
        cout<<real<<" + "<<imaginary<<"i";
    }
    complex operator+(complex c1){
        complex c3;
        c3.real=real+c1.real;
        c3.imaginary=imaginary+c1.imaginary;
        return c3;
    }
};
int main(){
    complex c1(1,2),c2(4,3),c3;
    c3=c1+c2;
    c3.display();
    return 0;
}