//ebill using objects
#include<iostream>
#include<iomanip>
using namespace std;
class ebill{
char username[20];
int userid;
int units;
float amount;
public:
ebill(){amount=0;}
void getdata(){
    cout<<"Enter username,userid and units consumed";
cin>>username>>userid>>units;
}
void disp(){
cout<<setw(24)<<username<<setw(6)<<userid<<setw(10)<<units<<setw(10)<<amount<<endl;
}
int getunits(){
    return units;
}
void getPrice(int units){
if(units<=50){
amount=0.50*units;
}
else if(units>50 && units<=150){
amount=0.50*50+0.75*(units-50);
}
else if(units>150 && units<=250){
amount=0.5*50+0.75*100+1.20*(units-100);
}
else{
amount=0.5*50+0.75*100+1.20*100+1.5*(units-250);
}
amount=amount+0.02*amount;
}
};
int main(){
    int num;
    cin>>num;
    ebill eb[num];
    for(int i=0;i<num;i++){
        eb[i].getdata();
    }
    cout<<setw(24)<<"NAME"<<setw(6)<<"ID"<<setw(10)<<"UNITS"<<setw(10)<<"AMOUNT"<<endl;
    for(int i=0;i<num;i++){
        eb[i].getPrice(eb[i].getunits());
        eb[i].disp();
    }
return 0;
}



