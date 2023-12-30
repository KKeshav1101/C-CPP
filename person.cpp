#include<fstream>
#include<iostream>
using namespace std;
class person{
    protected:
    char name[80];int age;
    public:
    void getData(){
        cout<<"\n Enter name: ";cin>>name;
        cout<<"Enter age :";cin>>age;
    }
    void show(){
        cout<<"\n Name :"<<name;
        cout<<"\n Age :"<<age;
    }
};
int main()
{
    person p;
    ifstream infile;
    infile.open("pers.txt",ios::in|ios::binary);
    infile.seekg(0,ios::end);
    int endposition=infile.tellg();
    int n=endposition/sizeof(person);
    cout<<"\nThere are"<<n<<" persons in file";
    cout<<"\nEnter person number";
    cin>>n;
    int position=(n-1)*sizeof(p);
    infile.seekg(position);
    infile.read((char*)&p,sizeof(p));
    p.show();
    cout<<endl;
    return 0;
}