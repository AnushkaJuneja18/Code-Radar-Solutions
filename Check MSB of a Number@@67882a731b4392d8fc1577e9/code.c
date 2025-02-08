#include<stdio.h>

int main() {
    int N;
    printf("");
    scanf("%d \n" &N);
    if (N & 0x80000000) {
        printf("Set \n");
    }
    else {
        printf("Not Set \n");
    }
    return 0;
}