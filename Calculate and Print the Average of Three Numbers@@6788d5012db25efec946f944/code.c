#include<stdio.h>

int main() {
    int a, b, c;
    printf("");
    scanf("%d %d %d", &a, &b, &c);
    float average = (a+b+c)/3.0;
    printf("Average: %.2f", average);
    return 0;
}