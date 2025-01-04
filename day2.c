#include <stdio.h>
int main(){
    int i = 90;
    int *j = &i;
    printf("the address of i is %p\n",&i);
    printf("The address of i is %p", j);

    return 0;
}