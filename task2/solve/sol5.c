#include <stdio.h>

int main(void) {
    float num1, num2, result;
    printf("enter 1st * 2nd => ");
    scanf("%f %f",& num1,& num2);
    result = num1 * num2;
    printf("%.2f", result);
}