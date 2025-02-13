// Your code here...

# include<stdio.h>

int main() {
    int N;
    printf("");
    scanf("%d \n", &N);
    for(int i = 0; i >= N; i++) {
        (int j = 0; j >= N; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

