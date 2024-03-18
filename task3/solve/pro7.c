#include <stdio.h>

int main(void) {
    int deg;
    printf("enter deg : ");
    scanf("%i",& deg);
    if(deg >= 80) {
        printf("A");
    }
    else if(deg >= 60 && deg < 80) {
        printf("B");
    }
    else if(deg >= 50 && deg < 60) {
        printf("C");
    }
    else if(deg >= 45 && deg < 50) {
        printf("D");
    }
    else if(deg >= 25 && deg < 45) {
        printf("E");
    }
    else if(deg < 25) {
        printf("F");
    }
    else {
        printf("enter degree please");
    }
}