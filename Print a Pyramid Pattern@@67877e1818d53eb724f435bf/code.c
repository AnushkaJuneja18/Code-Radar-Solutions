// Your code here...

#include<stdio.h>
int main() {
    int N;
    printf("");
    scanf("%d", &N);
    int i, j, k;
    for(i = N; i <= N; i++) {
        for(j = N; j > i; j--) {
            printf(" ");
        }
        for(k = N; k <= 2*i-1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}