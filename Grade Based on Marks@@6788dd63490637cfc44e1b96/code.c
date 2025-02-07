#include<stdio.h>

int main() {
    int n;
    printf("");
    scanf("%d", &n);
    if(n >= 90 || n >= 80) {
        printf("A");
    }
    if(n <= 90 || n >= 70) {
        printf("B");
    }
    if(n >= 60 || n < 70); {
        printf("C");
    }
    if(n < 70 || n < 60) {
        printf("D");
    }
    return 0;
}