#include <stdio.h>

int main(void) {
    int num1, num2, num3, result3;
    printf("enter three nums => ");
    scanf("%i %i %i",&num1 ,&num2 ,&num3);
    result3 = num1 + num3;
    printf("%i + %i = %i\n", num1, num3, result3);
}