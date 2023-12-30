#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
class Library{
    string book_name,author_name;
    int no_of_pages,no_of_copies;
    static long int book_no;
    public:
    Library(){
        ++book_no;
    }
    Library(string b,string a,int np,int nc){
        book_name=b;
        author_name=a;
        no_of_pages=np;
        no_of_copies=nc;
    }
    void getd(){
        cin>>book_name>>author_name>>no_of_pages>>no_of_copies;
    }
    long int getbn(){
        return book_no;
    }
    void display(){
        cout<<setw(8)<<book_no<<setw(20)<<book_name<<setw(20)<<author_name<<setw(6)<<no_of_pages<<setw(6)<<no_of_copies;
    }
    void diskout(){
        ofstream of;
        of.open("lib.txt",ios::out);
        of<<book_name<<author_name<<no_of_pages<<no_of_copies<<book_no;
    }
    void diskin(){
        ifstream myf("lib.txt");
        myf>>book_name>>author_name>>no_of_pages>>no_of_copies>>book_no;
        cout<<setw(8)<<book_no<<setw(20)<<book_name<<setw(20)<<author_name<<setw(6)<<no_of_pages<<setw(6)<<no_of_copies;
    }
};
void search(long int bn,Library arr[]){
    for(int i=0;i<3;i++){
        if (arr[i].getbn()==bn){
            arr[i].display();
        }
    }
}
int main(){
    for(int i=0;i<3;i++){
        Library lib()
        lib.getd();
        lib.diskout();
    }
    for(int i=0;i<3;i++){
        lib[i].diskin();
    }
    long int booknum;
    cout<<"Enter book number to be searched";
    cin>>booknum;
    search(booknum,lib);
    return 0;
}