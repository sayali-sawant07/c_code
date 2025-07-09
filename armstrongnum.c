#include<stdio.h>
#include<math.h>

int main(){
    int num, originalNum, remainder, result=0, n=0;

    printf("Enter an integer : ");
    scanf("%d", &num);

    originalNum = num;

    while(originalNum != 0){
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    while(originalNum != 0){
        remainder = originalNum % 10;
        result += remainder*remainder*remainder;
        originalNum /= 10;
    }
    
    if( result == num)
    printf("%d is an armstrong number.", num);

    else
    printf("%d is not an armstrong number.", num);
}