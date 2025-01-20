#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    float cgpa;
    char name[50];
};

int main(){
    struct student s1 ={1663, 8.9,"Khushi"}, s2 = {16665, 10,"Atharv"} ,s3 = {1665 , 9.2, "Neha"};

    printf("Student name is %s\n", s1.name);
    printf("student's roll number is %d\n", s1.roll);
    printf("Your cgpa is %.2f\n", s1.cgpa);

    printf("Student name is %s\n", s2.name);
    printf("student's roll number is %d\n", s2.roll);
    printf("Your cgpa is %.2f\n", s2.cgpa);

    printf("Student name is %s\n", s3.name);
    printf("student's roll number is %d\n", s3.roll);
    printf("Your cgpa is %.2f\n", s3.cgpa);
}