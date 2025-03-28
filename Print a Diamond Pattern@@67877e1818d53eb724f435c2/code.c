// Your code here...

#include<stdio.h>

int main() {
    int N;
    printf("");
    scanf("%d", &N);
    for(int i = 1; i <= N; i++) {
        for(int j = i; j < N; j++) {
            printf(" ");
        }
        for(int j = 1; j <= (2*i-1); j++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i = N; j > i; j--) {
        printf(" ");
    }
    for(int j = 1; j <= 2*i-1; j++) {
        printf("*");
    }
    printf("\n");
    return 0;
}