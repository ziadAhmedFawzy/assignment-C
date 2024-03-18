#include <stdio.h>

int main(void) {
    int numMonth;
    printf("enter num month : ");
    scanf("%i",& numMonth);
    if(numMonth == 9 && numMonth == 4 && numMonth == 6 && numMonth == 11) {
        printf("30");
    }
    else if(numMonth == 2) {
        printf("28 or 29");
    }
    else {
        printf("31");
    }
}