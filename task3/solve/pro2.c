#include <stdio.h>

int main(void) {
    float salary, rate;
    int time;
    printf("enter salary , rate , time : ");
    scanf("%f %f %i",& salary,& rate,& time);
    float result = (salary * rate * time) / 100;
    printf("the interest is %.2f\n", result);
}