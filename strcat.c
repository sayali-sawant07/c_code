#include<stdio.h>
#include<string.h>
int main(){
    char ch[10]={'h','e','l','l','o'};
    char ch2[10]={'c'};
    strcat(ch, ch2);
    printf("The value first string is %s", ch);
}