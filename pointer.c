#include<stdio.h>
int main(){
    int num=45;
    int *p;
    p=&num;
    printf("Adress of a variable:%d\n",p);
    printf("Value of a variable:%d\n",*p);
}