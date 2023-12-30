//function overlaoding with power()
#include<iostream>
using namespace std;
double power(double N,int P=2);
int power(int N,int P=2);
long int power(long int N,int P=2);
double power(float N,int P=2);
void power(char N,int P);
int main(){
int a,a1;
long int b;
float c;
char e;
double N;
cout<<"Enter double type for n";
cin>>N;
cout<<"Enter 2 integers, another long int and 1 float values";
cin>>a>>a1>>b>>c;
cout<<"Enter a character";
cin>>e;
cout<<N<<" to the power "<<a<<" is "<<power(N,a)<<endl;
cout<<a1<<" to the power "<<a<<" is "<<power(a1,a)<<endl;
cout<<b<<" to the power "<<a<<" is "<<power(b,a)<<endl;
cout<<c<<" to the power "<<a<<" is "<<power(c,a)<<endl;
power(e,a);
return 0;
}
double power(double N,int P){
int i;
double prod=1;
for(i=0;i<P;i++){
	prod=prod*N;
	}
return prod;
}
int power(int N,int P){
int i;
int prod=1;
for(i=0;i<P;i++){
	prod=prod*N;
	}
return prod;
}
long int power(long int N,int P){
int i;
int prod=1;
for(i=0;i<P;i++){
	prod=prod*N;
	}
return prod;
}
double power(float N,int P){
int i,prod=1;
for(i=0;i<P;i++){
	prod=prod*N;
	}
return prod;
}
void power(char N,int P){
int i;
for(i=0;i<P;i++){
cout<<N;
}
}
