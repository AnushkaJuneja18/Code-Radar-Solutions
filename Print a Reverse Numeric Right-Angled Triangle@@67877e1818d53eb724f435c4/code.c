// Your code here...

#include<stdio.h>

int main() {
    int N;
    printf("");
    scanf("%d", &N);
    for(int i = N; i >= 1; i++) {
        for(int j = N; j >= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}