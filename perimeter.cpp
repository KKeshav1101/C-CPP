//perimeter using function overload
#include<iostream>
using namespace std;
float getperimeter(float s1,float s2,float s3);
float getperimeter(float l,float b);
int main(){
float s1,s2,s3,s4,s5;
cout<<"Enter five float values";
cin>>s1>>s2>>s3>>s4>>s5;
cout<<getperimeter(s1,s2,s3)<<endl;
cout<<getperimeter(s4,s5)<<endl;
return 0;
}
float getperimeter(float s1,float s2,float s3){
return s1+s2+s3;
}
float getperimeter(float l,float b){
return 2*(l+b);
}
