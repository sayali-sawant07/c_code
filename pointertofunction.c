#include<stdio.h>
int add(int a, int b){
return a+b;
}

int main(){
    int(*funcp)(int, int);
    funcp = add;
    int result = funcp(5,5);
    printf("result:%d\n", result);
}