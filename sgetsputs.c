#include<stdio.h>
void main(){
    char str[10];
    printf("Enter the string: ");
    fgets(str,10,stdin);
    printf("%s", str);
}
