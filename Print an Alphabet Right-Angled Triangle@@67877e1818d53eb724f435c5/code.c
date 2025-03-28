// Your code here...

#include<stdio.h>

int main() {
    int N;
    printf("");
    scanf("%d", &N);
    char i, j;
    for(i = 'A'; i <= N; i++) {
        for(j = 'A'; j <= N; j++) {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}