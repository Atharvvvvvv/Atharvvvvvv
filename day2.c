#include <stdio.h>
int returning(int* ptr){
    printf("The value of ptr is %p\n", ptr);
    printf("The value at ptr is %d\n", *ptr);
    return 5;
}
int main(){
    int i = 20;
    int* ptr = &i;
    printf("the address of i is %p\n",&i);
    returning(ptr);
    return 0;
}