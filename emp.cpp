//employee
#include<iostream>
#include<iomanip>
using namespace std;
class Employee{
char name[20];
int emp_id;
int salary;
public:
void getdata(){
cin>>name>>emp_id>>salary;
}
void disp(){
cout<<setw(22)<<name<<setw(8)<<emp_id<<setw(10)<<salary<<endl;
}
void update_sal(int x){
salary=salary+x;
}
int check(){
return emp_id;
}
};
int main(){
int n;
cin>>n;
Employee emp[n];
cout<<"Enter emp_name,emp_id and salary for "<<n<<" people :";
for(int i=0;i<n;i++){
	emp[i].getdata();
}
while(1<2){
int op;
cout<<"Enter appropriate option :\n1.DISPLAY ALL DETAILS\n2.UPDATE SALARY OF ONE EMPLOYEE\nEnter any other key to exit\n";
cin>>op;
if(op==1){
cout<<setw(22)<<"NAME"<<setw(8)<<"emp_id"<<setw(10)<<"salary"<<endl;
for(int i=0;i<n;i++)
emp[i].disp();
}
else if(op==2){
int id,x;
cout<<"Enter employee id whose sal is to be increased.";
cin>>id;
cout<<"Enter amount ";
cin>>x;
for(int i=0;i<n;i++){
if(id==emp[i].check()){
emp[i].update_sal(x);
}
}
}
else{
cout<<"Exit";
break;}
}
return 0;
}
