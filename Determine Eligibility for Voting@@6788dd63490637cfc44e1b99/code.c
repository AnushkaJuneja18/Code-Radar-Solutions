#include<stdio.h>

int main() {
    int age;
    printf("");
    scanf("%d \n", &age);
    if (age >= 18) {
        printf("Eligible");
    }
    else {
        printf("Not Eligible");
    }
    return 0;
}