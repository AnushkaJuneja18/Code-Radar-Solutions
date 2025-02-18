// Your code here...

# include<stdio.h>

int main() {
    int N;
    printf("");
    scanf("%d", &N);

    for(int i = 1; i <= 10; i++) {
        printf("N * %d = %d \n", N * i);
    }
    return 0;
}