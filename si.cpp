//simple interest using default parameters
#include<iostream>
using namespace std;
float getSI(float P,float r,float n=10);
int main(){
float P,r,n;
cout<<"Enter Principle amount, rate of interest, and time period in years";
cin>>P>>r>>n;
cout<<getSI(P,r,n);
return 0;
}
float getSI(float P,float r,float n){
float si=P*r*n/100;
return si;
}
