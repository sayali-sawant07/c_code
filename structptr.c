#include<stdio.h>
struct Employee{
    int emp_id;
    char emp_name[10];
};
int main(){
    struct Employee e1 ={1201, "Sayali"};
    struct Employee *ptr = &e1;

    printf("Employee ID : %d\n", ptr->emp_id);
    printf("Employee name : %s\n", ptr->emp_name);
}