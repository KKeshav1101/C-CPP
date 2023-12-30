#include<iostream>
using namespace std;
void sort(int [],int);
int main()
{
int i,n;
cout<<"Enter number of elements";
cin>>n;
int array[n];
cout<<"Enter the elements";
for(i=0;i<n;i++)
cin>>array[i];
sort(array,n);
for(int j=0;j<n;j++)
cout<<array[j]<<" ";
return 0;
}
void sort(int X[],int y){
int t,i,j;
for(i=0;i<y-1;i++){
	for(j=0;j<y-i-1;j++){
		if(X[j]>X[j+1]){
			t=X[j];
			X[j]=X[j+1];
  			X[j+1]=t;
			}		
		}	
	}
}
