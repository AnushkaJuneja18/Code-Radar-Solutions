#include<stdio.h>

int main() {
    int year;
    printf("");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) {
        printf("%d \n",Leap Year);
    }
    else {
        printf("%d \n", Not a Leap Year);
    }
    return 0;
}