#include <stdio.h>

int main(void) {
    int num1, num2, num3, num4, num5, result;
    printf("enter five nums => ");
    scanf("%i %i %i %i %i",&num1 ,&num2 ,&num3 ,&num4 ,&num5);
    result = num1 + num2 + num3 + num4 + num5;
    printf("%i", result);
}