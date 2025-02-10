#include<stdio.h>

int main() {
    int a, b;
    printf("");
    scanf("%d %d", &a, &b);
    int addition = a + b;
    int subtraction = a - b;
    int multiplication = a * b;
    int divison = a / b;
    printf("%d \n", addition);
    printf("%d \n", subtraction);
    printf("%d \n", multiplication);
    printf("%d \n", divison);
    return 0;
}