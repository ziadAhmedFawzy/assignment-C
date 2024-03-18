#include <stdio.h>

int main(void) {
    const int classHeld = 12;
    float persentage;
    int classAttended;
    printf("enter the class Attended : ");
    scanf("%i",& classAttended);
    persentage = ((float)(classAttended) / classHeld) * 100;
    if(persentage >= 75)
        printf("can you enter the exam");
    else 
        printf("can not you enter the exam");
}