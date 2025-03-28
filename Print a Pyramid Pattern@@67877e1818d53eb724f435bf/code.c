// Your code here...

#include<stdio.h>
int main() {
    int N;
    printf("");
    scanf("%d", &N);
    int i, j, k;
    for(i = N; i <= N; i++) {
        for(j = 1; j <= N-i; j++) {
            printf(" ");
        }
        for(k = 1; k <= 2*i-1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}