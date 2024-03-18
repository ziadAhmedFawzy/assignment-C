#include <stdio.h>

int main(void) {
    char letter;
    int salary, id;
    float bouns;
    printf("enter your 1st letter : ");
    scanf("%c",& letter);
    printf("enter salary : ");
    scanf("%i",& salary);
    printf("enter id : ");
    scanf("%i",& id);
    if (salary > 2000)
    {
        bouns = salary * 0.15;
        salary += bouns;
        printf("%c\n", letter);
        printf("%i\n", salary);
    }
    else {
        bouns = salary * 0.5;
        salary += bouns;
        printf("%c\n", letter);
        printf("%i\n", salary);
    }
}