#include<iostream>
#include<string>
using namespace std;
class MyStringArray{
    string arr[5];
    public:
    void get(){
        for(int i=0;i<5;i++)
        cin>>arr[i];
    }
    void display(){
        for(int i=0;i<5;i++)
        cout<<arr[i]<<"\t";
    }
    void operator+();
    operator int(){
            int kount=0;
            for(int i=0;i<5;i++){
                kount=kount+sizeof(arr[i])-1;
        }
    
    return kount;
    }
};
int main(){
    MyStringArray msa;
    int k;
    msa.get();
    msa.display();
    +msa;
    msa.display();
    k=msa;
    cout<<"Total number of characters in MyStringArray= "<<k;
    return 0;
}
void MyStringArray::operator+(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void swap(string s1,string s2){
    string t;
    t=s1;
    s1=s2;
    s2=t;
}