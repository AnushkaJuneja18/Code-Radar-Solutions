#include<stdio.h>

int main() {
    int N;
    printf("");
    scanf("%d", &N);
    if (N & 1) {
        printf("Set \n");
    }
    else {
        printf("Not Set \n");
    }
    return 0;
}