#include<iostream>
using namespace std;
int main()
{
int n1,n2,n3;
cout<<"Enter the 3 numbers";
cin>>n1>>n2>>n3;
if(n1>n2 && n1>n3){
	cout<<n1<<" is the greatest";
	}
else if(n2>n1 && n2>n3){
	cout<<n2<<" is the greatest";
	}
else
	cout<<n3<<" is the greatest";
return 0;
}
