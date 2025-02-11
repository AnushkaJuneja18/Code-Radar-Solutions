#include<stdio.h>

int main() {
    int a, b;
    printf("");
    scanf("%d %d", &a, &b);
    if(b * b == a) {
        printf("Yes \n");
    }
    else {
        printf("No \n");
    }
    return 0;
}