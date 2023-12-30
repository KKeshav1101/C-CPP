#include<iostream>
#include<iomanip>
using namespace std;
float getPrice(int units_consumed){
float amount=0;
if(units_consumed<=50){
amount=0.50*units_consumed;
}
else if(units_consumed>50 && units_consumed<=150){
amount=0.50*50+0.75*(units_consumed-50);
}
else if(units_consumed>150 && units_consumed<=250){
amount=0.5*50+0.75*100+1.20*(units_consumed-100);
}
else{
amount=0.5*50+0.75*100+1.20*100+1.5*(units_consumed-250);
}
amount=amount+0.02*amount;
return amount;
}
struct ebill{
char username[20];
int userid;
int units;
float amount;
};
int main(){
int n;
cout<<"Enter n";
cin>>n;
struct ebill eb[n];
cout<<"Enter username, user id and units consumed for "<<n<<" consumers";
for(int i=0;i<n;i++){
cin>>eb[i].username>>eb[i].userid>>eb[i].units;
eb[i].amount=getPrice(eb[i].units);
}
cout<<"BILL"<<endl;
cout<<std::setw(22)<<"NAME"<<setw(10)<<"USERID"<<setw(10)<<"UNITS"<<setw(10)<<"COST"<<endl;
for(int j=0;j<n;j++){
cout<<std::setw(22)<<eb[j].username<<setw(10)<<eb[j].userid<<setw(10)<<eb[j].units<<setw(10)<<eb[j].amount<<endl;
}
return 0;
}
