#include <stdio.h>

int main(void) {
    int numDay;
    printf("enter numday : ");
    scanf("%i",& numDay);
    if (numDay == 1)
    {
        printf("saturday");
    }
    else if(numDay == 2) {
        printf("snuday");
    }
    else if(numDay == 3) {
        printf("monday");
    }
    else if(numDay == 4) {
        printf("tuesday");
    }
    else if(numDay == 5) {
        printf("wednesday");
    }
    else if(numDay == 6) {
        printf("thursday");
    }
    else if(numDay == 7) {
        printf("friday");
    }
    else {
        printf("not found day");
    }
}