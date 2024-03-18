#include <stdio.h>

int main(void) {
    char operator;
    float num1,num2;
    printf("enter your operator : ");
    scanf("%c",&operator);
    printf("enter the 1st num : ");
    scanf("%f",& num1);
    printf("enter the 2ntd num : ");
    scanf("%f",& num2);
    switch (operator)
    {
    case '+':
        printf("the result is %.2f",num1 + num2);
        break;
    case '-':
        printf("the result is %.2f",num1 - num2);
        break;
    case '*':
        printf("the result is %.2f",num1 * num2);
        break;
    case '/':
        printf("the result is %.2f",num1 / num2);
        break;
    default:
        printf("this is operator not found!");
}
}