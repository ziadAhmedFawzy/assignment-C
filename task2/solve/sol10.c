#include <stdio.h>

int main(void) {
    int num1, num2, num3, num4, result1, result2;
    printf("enter three nums => ");
    scanf("%i %i %i %i",&num1 ,&num2 ,&num3 ,&num4);
    result1 = num1 + num2;
    result2 = num4 * num3;
    printf("%i + %i = %i\n", num1, num2, result1);
    printf("%i * %i = %i\n", num4, num3, result2);
}