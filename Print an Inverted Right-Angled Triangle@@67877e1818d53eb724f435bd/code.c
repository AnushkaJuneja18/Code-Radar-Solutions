// Your code here...

# include<stdio.h>

int main() {
    int N;
    printf("");
    scanf("%d %d", &N);
    for(int i = N; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}