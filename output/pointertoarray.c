#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int (*p)[5]=&arr;
    printf("First element:%d\n", (*p)[0]);
    printf("Second element:%d\n", (*p)[1]);
}