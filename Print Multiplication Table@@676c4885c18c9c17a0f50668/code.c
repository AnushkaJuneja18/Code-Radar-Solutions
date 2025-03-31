// Your code here...

# include<stdio.h>

int main() {
    int N;
    printf("");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        printf(" N X %d = %d \n",N * i);
    }
    return 0;
}