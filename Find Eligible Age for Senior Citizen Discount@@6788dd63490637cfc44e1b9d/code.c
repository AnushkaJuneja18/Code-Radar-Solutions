#include<stdio.h>

int main() {
    int age;
    printf("");
    scanf("%d \n", &age);
    if (age >= 60) {
        printf("Eligible \n");
    }
    else {
        printf("Not Eligible \n");
    }
    return 0;
}