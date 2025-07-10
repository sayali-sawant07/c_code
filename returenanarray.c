#include<stdio.h>
int getarray (int arr[]){

    printf("Elements of array are:\n");

for(int i=0;i<10;i++){
    printf("%d\n", arr[i]);
}
}
int main(){
    int arr[10]={56,67,89,54,67,34,21,15,65,90};
    getarray(arr);
}