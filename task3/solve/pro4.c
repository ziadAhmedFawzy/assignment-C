#include <stdio.h>

int main(void) {
    float tempDeg, result;
    char temp;
    printf("enter (C) or (F) : ");
    scanf("%c",& temp);
    printf("enter deg : ");
    scanf("%f",&tempDeg);
    if(temp == 'c') {
        result =  tempDeg * 9/5 + 32;
        printf("f to c is %.2f", result);
    }
    else if(temp == 'f') {
        result =   (tempDeg - 32) * 5/9;
        printf("c to f is %.2f", result);
    }
    else {
        printf("try again");
    }
}