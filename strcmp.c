#include<stdio.h>
#include<string.h>
int main(){
    char str[10],str2[10];
    printf("Enter first string:");
    gets(str);
    printf("Enter second string:");
    gets(str2);
    
    if(strcmp(str,str2) == 0){
        printf("Strings are equal");
        
    }
    else
    printf("Strings are not equal");
}