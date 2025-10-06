#include<stdio.h>


int main(){
    int a = 11, b = 3,mod,sum,sub,multiply;
    float divide;
    sum = a + b;
    sub = a - b;
    multiply = a * b;
    divide = a / b;
    mod = a % b;

    printf("Sum: %d\nSub: %d\nMultiply: %d\nDivide: %.2f\nModules: %d", sum,sub,multiply,divide,mod);
    return 0;
}