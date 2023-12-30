//designing a hospital management system using class and object
#include<iostream>
#include<iomanip>
using namespace std;
class patient{
int id;
char p_name[20];
char diagnosis[30];
int duration_of_stay;
public:
void getdata(){
	cin>>id>>p_name>>diagnosis>>duration_of_stay;
	}
void disp(){
	cout<<setw(8)<<id<<setw(24)<<p_name<<setw(32)<<diagnosis<<setw(10)<<duration_of_stay<<endl;
	}
};
int main(){
int n;
cout<<"Enter no. of patients :";
cin>>n;
patient patients[n];
for(int i=0;i<n;i++){
	cout<<"Enter patient id,name,diagnosis and duration of stay :";
	patients[i].getdata();
	}
cout<<setw(8)<<"ID"<<setw(24)<<"NAME"<<setw(34)<<"DIAGNOSIS"<<setw(10)<<"DURATION"<<endl;
for(int i=0;i<n;i++){
	patients[i].disp();
	}
return 0;
}

