#include<iostream>
using namespace std;
class TIME
{      int hrs ;
       int mins ;
   public :
   time (int t)
   {
       hrs = t / 60 ;
       mins = t % 60;
   }
   void disp(){
    cout<<hrs<<" "<<mins;
   }
} ;
int main(){
TIME T1;
int duration = 85;
T1 = duration;
T1.disp();
return 0;
}