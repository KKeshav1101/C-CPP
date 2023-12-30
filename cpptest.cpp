#include<iostream>
#include<iomanip>
using namespace std;
void sort(int);
class car{
private:
char company[15];
char model[15];
int year;
int price;
public:
    void getdata(){
        cout<<"ENTER CAR DETAILS (COMPANY,MODEL,YEAR,PRICE) :";
        cin>>company>>model>>year>>price;
    }
    void disp(){
        cout<<setw(18)<<company<<setw(18)<<model<<setw(7)<<year<<setw(10)<<price<<endl;
    }
    int carcost(){
        return price;
    }
};
int main(){
//int y;
//cout<<"Enter number of cars ";
//cin>>y;
car cars[5];
for(int i=0;i<5;i++){
    cars[i].getdata();
}
cout<<setw(18)<<"COMPANY"<<setw(18)<<"MODEL"<<setw(7)<<"YEAR"<<setw(10)<<"PRICE"<<endl;
cout<<"-------------------------------------------------------------------------------------------------"<<endl;
for(int i=0;i<5;i++){
    cars[i].disp();
}
cout<<endl;
sort();
cout<<setw(18)<<"COMPANY"<<setw(18)<<"MODEL"<<setw(7)<<"YEAR"<<setw(10)<<"PRICE"<<endl;
cout<<"================================================================================================="<<endl;
for(int i=0;i<5;i++){
    cars[i].disp();
}
cout<<endl;
}
void sort(){
    int i,j;
    car t;
    for(i=0;i<5-1;i++){
        for(j=0;j<5-i-1;j++){
            if(cars[j].carcost()>cars[j+1].carcost()){
                    t=cars[j];
                    cars[j]=cars[j+1];
                    cars[j+1]=t;
            }
        }
    }
}