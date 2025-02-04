#include<stdio.h>

int main() {
    int a, b, c;
    printf("");
    scanf("%d %d %d", &a, &b, &c);
    float average = (a+b+c)/3;
    printf("Average: %.2lf", average);
    return 0;
}