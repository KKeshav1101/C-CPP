//absval using function overloading
#include<iostream>
using namespace std;
int absval(int n);
float absval(float f);
double absval(double d);
int main(){
int n;
float f;
double d;
cin>>n>>f>>d;
cout<<absval(n)<<endl;
cout<<absval(f)<<endl;
cout<<absval(d)<<endl;
return 0;
}
int absval(int n){
int x=0;
if(n>0)
x=n;
else
x=-n;
return x;
}
float absval(float f){
float x=0;
if(f>0)
x=f;
else
x=-f;
return x;
}
double absval(double d){
double x=0;
if(d>0)
x=d;
else
x=-d;
return x;
}
