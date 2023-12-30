#include<stdio.h>
void towerofHanoi(int n,char from_rod,char to_rod,char aux_rod){
    if(n==1){
        printf("\n Move disk 1 from rod %c to rod %c",from_rod, to_rod);
        return;
    }
    towerofHanoi(n-1,from_rod,aux_rod, to_rod);
    printf("\n Move disk %d from rod %c to rod %c",n,from_rod,to_rod);
    towerofHanoi(n-1,aux_rod,to_rod,from_rod);
}
int main()
{
    int n=3;
    towerofHanoi(n,'A','C','B');
    return 0;
}