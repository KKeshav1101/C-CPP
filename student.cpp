#include<iostream>
#include<iomanip>
using namespace std;
struct student{
char name[20];
int reg;
int age;
char gender;
char branch[10];
float cgpa;
}s1[5];
int main(){
cout<<"Enter name,reg,age,gender,branch and cgpa in that correct order 5 times \n";
for(int i=0;i<5;i++){
	cin>>s1[i].name>>s1[i].reg>>s1[i].age>>s1[i].gender>>s1[i].branch>>s1[i].cgpa;
	}
cout<<std::setw(22)<<"NAME"<<std::setw(11)<<"REG.NO."<<std::setw(4)<<"AGE"<<std::setw(8)<<"GENDER"<<std::setw(12)<<"BRANCH"<<std::setw(6)<<"CGPA"<<endl;
for(int j=0; j<5;j++){
	cout<<std::setw(22)<<s1[j].name<<std::setw(11)<<s1[j].reg<<std::setw(4)<<s1[j].age<<std::setw(8)<<s1[j].gender<<std::setw(12)<<s1[j].branch<<std::setw(6)<<s1[j].cgpa<<endl;	
	}
return 0;
}

