// Your code here...

# include<stdio.h>

int main() {
    int N;
    printf("");
    scanf("%d", &N);
    for(int i = N; i <= N; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}