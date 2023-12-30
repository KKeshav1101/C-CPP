//volume of cylinder using compute() with and without default parameters
#include<iostream>
using namespace std;
float compute(float radius=-1,float height=2);
int main(){
float radius,height;
cin>>radius>>height;
cout<<compute()<<endl;
cout<<compute(radius,height)<<endl;
return 0;
}
float compute(float radius,float height){
float volume=3.14*radius*radius*height;
return volume;
}

