#include<stdio.h>
typedef int* intPtr;
int main(){
    int a= 20;
    intPtr p = &a;
    printf("value of a %d", *p);
}