//printing c n times using functions
#include<iostream>
using namespace std;
void Print(char c='*',int n=5);
void Print(int n);
int main(){
char a;
int n;
cout<<"Enter a char :";
cin>>a;
cout<<"Enter n :";
cin>>n;
Print(a,n);
Print(n);
Print(a);
Print();
return 0;
}
void Print(char c,int n){
for(int i=0;i<n;i++){
cout<<c;
}
cout<<endl;
}
void Print(int n){
for(int i=0;i<n;i++)
cout<<"*";
cout<<endl;
}
