 #include<stdio.h>
#include<string.h>
struct student{
    int roll_no;
    char name[30];
    char branch[40];
    int batch;
};
struct student s,*ptr;
int main()
{
    ptr=&s;
    printf("Enter the roll number of student\n");
    scanf("%d",&ptr->roll_no);
    printf("Enter name of the student\n");
    scanf("%s",&ptr->name);
    printf("Enter Branch of student\n");
    scanf("%s",&ptr->branch);
    printf("Enter batch of student\n");
    scanf("%d",&ptr->batch);

    printf("\nstudent details are:\n");

    printf("Roll no: %d\n",ptr->roll_no);
    printf("Name: %s\n",ptr->name);
    printf("Branch:%s\n",ptr->branch);
    printf("batch: %d\n",ptr->batch);
    printf("%c",(char)(ptr->roll_no));
    return 0;
}