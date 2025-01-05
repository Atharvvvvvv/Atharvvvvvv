#include <stdio.h>
void reverseArray(int arr[], int size){
    int a = 0 , b = size -1 ,c;
    while(a<b){
        c = arr[a];
        arr[a] = arr[b];
        arr[b]= c;
        a++;
        b--;
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main (){
    int arr[6]={1,2,3,4,5,6};
    reverseArray(arr,6);
    printArray(arr,6); 

    return 0;
}