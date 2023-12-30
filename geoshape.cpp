#include<iostream>
using namespace std;
class GeometricShape{
    protected:
    double x,y,area,h;
    public:
    void getdata(){
        cout<<"Enter dimensions (x,y,h):";
        cin>>x>>y>>h;
    }
    virtual void displayarea(){
        cout<<area;
    }
};
class Rhombus : public GeometricShape{
    public:
    void displayarea(){
        area=x*y/2;
        cout<<"Area of rhombus ="<<area<<endl;
    }
};
class Rectangle : public GeometricShape{
    public:
    void displayarea(){
        area=x*y;
        cout<<"Area of Rectangle ="<<area<<endl;
    }
};
class Trapezoid : public GeometricShape{
    public:
    void displayarea(){
        area=(x+y)*h/2;
        cout<<"Area of Trapezoid ="<<area<<endl;
    }
};
int main(){
    GeometricShape  *ptr1,*ptr2,*ptr3;

    Rhombus r;
    Rectangle rect;
    Trapezoid t;
    ptr1=&r;
    ptr2=&rect;
    ptr3=&t;
    r.getdata();
    rect.getdata();
    t.getdata();
    ptr1->displayarea();
    ptr2->displayarea();
    ptr3->displayarea();
}