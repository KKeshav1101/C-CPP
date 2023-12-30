//inline greatest
#include<iostream>
using namespace std;
int greatest(int a,int b,int c){
if(a>b && a>c){
return a;
}
else if(b>a && b>c){
return b;
}
else{return c;}
}
int main(){
int a,b,c;
cin>>a>>b>>c;
cout<<greatest(a,b,c)<<" is the greatest";
return 0;
}
