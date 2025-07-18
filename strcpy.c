#include<stdio.h>
#include<string.h>
int main(){
    char ch[10]={'t','p','o','i','n','t','t','e','c','h','/0'};
    char ch2[10];
    strcpy(ch2,ch);
printf("value of second string is %s", ch2, ch);
}