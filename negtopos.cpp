//negtopos inline func
#include<iostream>
using namespace std;
int negtopos(int &n){
if(n<0)
n=-n;
return n;
}
int main(){
int n1;
cin>>n1;
cout<<negtopos(n1);
return 0;
}
