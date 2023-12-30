//book details as a class
#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
class book{
char BKName[25];
int BKId;
char BKAuthor[15];
public:
void getdata(){
cin>>BKName>>BKId>>BKAuthor;}
void disp(){
cout<<setw(27)<<BKName<<setw(7)<<BKId<<setw(17)<<BKAuthor<<endl;}
void BKUpdateDetails(char name[25],int id,char author[15]){
strcpy(BKName,name);
BKId=id;
strcpy(BKAuthor,author);
}
}BookDemo;
int main(){
BookDemo.getdata();
char name[25],author[15];
int id;
cout<<setw(27)<<"BOOK"<<setw(7)<<"ID"<<setw(17)<<"AUTHOR"<<endl;
BookDemo.disp();
cout<<"Enter new details for name,author and id :";
cin>>name>>author>>id;
BookDemo.BKUpdateDetails(name,id,author);
BookDemo.disp();
return 0;
}

