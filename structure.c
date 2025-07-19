#include<stdio.h>
#include<string.h>
struct student{
    int id;
    int num;
    char name[10];
}s1;
int main(){
s1.id=01;
s1.num=201;
strcpy(s1.name,"Aadesh");
printf("s1 id: %d\n", s1.id);
printf("s1 num: %d\n", s1.num);
printf("s1 name: %s\n", s1.name);
}