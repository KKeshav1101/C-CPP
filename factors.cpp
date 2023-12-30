#include<iostream>
using namespace std;
void getFactors(int n);
int main(){
int n;
cout<<"enter number";
cin>>n;
getFactors(n);
return 0;
}
void getFactors(int n){
int i;
for(i=1;i<=n;i++){
if(n%i==0){
cout<<i;
}
}
}
