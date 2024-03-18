#include <stdio.h>

int main(void) {
    int age1,age2,age3;
    printf("enter 3 ages : ");
    scanf("%i %i %i",&age1,&age2,&age3);
    if(age1 > age2 && age1 > age3)
        printf("the biggest is : %i\n", age1);
    else if (age2 > age1 && age2 > age3)
        printf("the biggest is : %i\n", age2);
    else {
        printf("the biggest is : %i\n", age3);
    }

    if(age1 < age2 && age1 < age3)
        printf("the smallest is : %i\n", age1);
    else if (age2 < age1 && age2 < age3)
        printf("the smallest is : %i\n", age2);
    else {
        printf("the smallest is : %i\n", age3);
    }
}