#include<iostream>
using namespace std;
class oldpound{
    int pounds;
    int shillings;
    int pence;
    public:
    void get(){
        cin>>pounds>>shillings>>pence;
    }
    void disp(){
        cout<<pounds<<"."<<shillings<<"."<<pence;
    }
    float operator-(){
        double newpounds;
        newpounds=pounds+shillings/20.0+pence/240.0;
        return newpounds;
    }
};
int main(){
    oldpound op;
    op.get();
    op.disp();
    cout <<" old pounds = "; 
    float f=-op;
    cout<<f<<" new pounds";
}