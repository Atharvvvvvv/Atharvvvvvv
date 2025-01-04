#include <stdio.h>
int main(){
    int marks[6] ={1,2,3,4,5,6};
    for(int i= 0;i<6;i++){
        printf("The value of marks at index %d is %d\n",i,&marks[i]);
    }
    return 0;
}   