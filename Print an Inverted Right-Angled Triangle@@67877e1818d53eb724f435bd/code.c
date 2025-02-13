// Your code here...

# include<stdio.h>

int main() {
    int i, j;
    printf("");
    scanf("%d %d", &i, &j);
    for(int i = N; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}