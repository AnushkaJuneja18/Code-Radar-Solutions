// Your code here...

# include<stdio.h>

int main() {
    int N;
    printf("");
    scanf("%d", &N);
    for(int i = 1; i <= n ; i--) {
        for(int j = 1; j <= n+1-i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}