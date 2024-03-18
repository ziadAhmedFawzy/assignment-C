#include <stdio.h>

int main(void) {
    float num1 ,num2;
    printf("enter 2 nums : ");
    scanf("%f %f",& num1,& num2);
    if (num1 > num2)
    {
        printf("%.2f is greatest", num1);
    }
    else {
        printf("%.2f is greatest", num2);
    }
}