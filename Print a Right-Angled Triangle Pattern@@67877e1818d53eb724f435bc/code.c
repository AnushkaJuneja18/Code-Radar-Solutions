// Your code here...

# include<stdio.h>

int main() {
    int N;
    printf("");
    scanf("%d \n", &N);
    int i, j;
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= i; j++) 
            printf("*");
            printf("\n");
    }
    return 0;
}

