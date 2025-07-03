#include<stdio.h>
int main(){
    int a,b;
    printf("enter two numbers :");
    scanf("%d%d", &a, &b);

    printf("*ARITHMETIC OPERATOR*");
    printf("Addition : a+b=%d\n", a+b);
    printf("Substraction : a-b=%d\n", a-b);
    printf("Multiplication : a*b=%d\n", a*b);
    printf("Division : a/b=%d\n", a/b);
    printf("Modulus : a%b=%d\n", a%b);

    printf("*RELATIONAL OPERATOR*");
    printf("Equal to : a==b = %d\n", a==b);
    printf("Not equal to : a!=b = %d\n", a!=b);
    printf("Greater than : a>b = %d\n", a>b);
    printf("Greater than and equal to : a>=b=%d\n", a>=b);
    printf("Less than80
         : a<b=%d\n", a<b);
    printf("Less than and equal to : a<=b=%d\n", a<=b);

    printf("*LOGICAL OPERATOR*");
    printf(" Logical AND : a&&b=%d\n", a&&b);
    printf("Logical OR : a||b=%d\n", a||b);
    printf("Logical NOT : a!=b=%d\n", a!=b);

    printf("*BITWISE OPERATOR*");
    printf("Bitwise AND : a&b=%d\n", a&b);
    printf("Bitwise OR : a|b=%d\n", a|b);
    printf("Bitwise XOR : a^b=%d\n", a^b);
    printf("Bitwise NOT : ~a=%d\n", ~a);
}