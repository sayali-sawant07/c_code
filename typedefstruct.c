#include<stdio.h>
typedef struct{
    int ID;
    char name[10];
}student;
int main(){
    student s1={1201, "Maya"};
    printf("ID=%d\nName=%s\n", s1.ID, s1.name);
}