#include<stdio.h>

int main() {
    int n;
    printf("");
    scanf("%d", &n);
    if(n >= 90 || n >= 80) {
        printf("A");
    }
    else if(n <= 90 || n >= 70) {
        printf("B");
    }
    else if(n >= 60 || n < 70); {
        printf("C");
    }
    else {
        printf("D");
    }
    return 0;
}