#include <stdio.h>
#include <string.h>
struct student{
    int age; 
    char name[50];     
};
int main(){
    struct student a , b; 
        a.age = 18;
        strcpy(a.name , "Atharv Singh Jadon");
        b.age = 18;
        strcpy(b.name , "Phool waale bag waali");
    
    printf("%d and %s", a.age, b.name );
}