#include<stdio.h>

int main() {
    int a;
    printf("");
    scanf("%d", &a);
    if (a > 0) {
        printf("Positive");
    }
    if (a == 0) {
        printf("Zero");
    }
    else {
        printf("Negative");
    }
    return 0;
}