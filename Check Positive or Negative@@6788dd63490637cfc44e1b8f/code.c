#include<stdio.h>

int main() {
    int a;
    printf("");
    scanf("%d", &a);
    if (a > 0) {
        printf("Positive");
    }
    if (a < 0) {
        printf("False");
    }
    else {
        printf("Zero");
    }
    return 0;
}