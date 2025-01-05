#include <stdio.h>
int main (){
    int a[] = {1,2,3,4,5,6,7,8,9};
    int* ptr = a;
    printf("the value at address %u is %d",ptr+4,*(ptr+4));

    return 0;
}