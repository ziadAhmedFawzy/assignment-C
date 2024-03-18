#include <stdio.h>

int main(void) {
    int num1, num2, num3, result1, result2;
    printf("enter three nums => ");
    scanf("%i %i %i",&num1 ,&num2 ,&num3);
    result1 = num1 + num2;
    result2 = result1 * num3;
    printf("%i + %i = %i\n", num1, num2, result1);
    printf("%i * %i = %i\n", result1, num3, result2);
}