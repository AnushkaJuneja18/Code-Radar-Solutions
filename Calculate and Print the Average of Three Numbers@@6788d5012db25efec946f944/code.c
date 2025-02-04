#include<stdio.h>

int main() {
    int a, b, c;
    printf("");
    scanf("%d %d %d", &a, &b, &c);
    int Average = (a+b+c/3);
    printf("Average: %f", Average);
    return 0;
}