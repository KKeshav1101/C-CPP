#include<iostream>
using namespace std;
int getGCD(int n1,int n2);
int main(){
int n1,n2;
cout<<"Enter n1 and n2";
cin>>n1>>n2;
cout<<getGCD(n1,n2);
return 0;
}
int getGCD(int n1,int n2){
int gcd;
for(int i=1;i<=min(n1,n2);i++){
if(n1%i==0 && n2%i==0){
gcd=i;
}
}
return gcd;
}
