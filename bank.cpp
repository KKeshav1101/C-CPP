#include<iostream>
#include<iomanip>
using namespace std;
class account{
int acc_no;
char name[20];
long int phno;
int balance;
int pin;
public:
account(){balance=0;}
void getdata(){
	cin>>acc_no>>name>>phno>>pin;
}
void disp(){
	cout<<setw(10)<<acc_no<<setw(22)<<name<<setw(12)<<phno<<setw(10)<<balance<<endl;
}
int checka(){
	return acc_no;
}
int checkp(){
	return pin;
}
void withdraw(int x){
	if(balance>x){
	balance=balance-x;
	cout<<"Balance :"<<balance<<endl;}
	else
	cout<<"Not enough balance, deposit more money."<<endl;
}
void deposit(int x){
	balance=balance+x;
	cout<<"Balance :"<<balance<<endl;
}
};
int main(){
int id,pass,n;
cin>>n;
account accounts[n];
cout<<"Enter account data (acc_no,name,phno and pin) :";
for(int i=0;i<n;i++){
accounts[i].getdata();
}


cout<<"Welcome customer, enter acc number :";
cin>>id;
cout<<"Enter PIN";
cin>>pass;
while(1<2){
int op;
cout<<"Enter appropriate option (1/2/3/4) to proceed :"<<endl<<"1.View account details\n2.Withdraw\n3.Deposit\n4.Exit\n";
cin>>op;
if(op==1){
for(int i=0;i<n;i++){
if(id==accounts[i].checka() && pass==accounts[i].checkp()){
		cout<<setw(10)<<"ACC_NO"<<setw(22)<<"NAME"<<setw(12)<<"PHNO"<<setw(10)<<"Bal"<<endl;
		accounts[i].disp();
		}
	}
}
else if(op==2){
cout<<"Enter amount you want to withdraw";
int x;
cin>>x;
for(int i=0;i<n;i++){
if(id==accounts[i].checka() && pass==accounts[i].checkp())
accounts[i].withdraw(x);
	}
}
else if(op==3){
cout<<"Enter amount you want to deposit";
int x;
cin>>x;
for(int i=0;i<n;i++){
if(id==accounts[i].checka() && pass==accounts[i].checkp())
accounts[i].deposit(x);
}
}
else if(op==4)
break;
else
cout<<"Enter appropriate option";
}
return 0;
}