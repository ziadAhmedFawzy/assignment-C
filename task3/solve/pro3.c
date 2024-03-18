#include <stdio.h>

int main(void) {
    float num1,num2,num3,result;
    printf("enter 3 nums : ");
    scanf("%f %f %f",& num1,& num2,& num3);
    result = (num1 + num2 + num3) / 3;
    printf("your average is %.2f", result);
}