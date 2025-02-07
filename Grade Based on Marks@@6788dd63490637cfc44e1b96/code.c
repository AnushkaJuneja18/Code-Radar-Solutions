#include<stdio.h>

int main() {
    int n;
    printf("");
    scanf("%d", &n);
    if(n >= 90 || n >= 80) {
        printf("A \n");
    }
    else if(n <= 90 || n >= 70) {
        printf("B \n");
    }
    else if(n >= 60 || n < 70); {
        printf("C \n");
    }
    else{
        printf("D \n");
    }
    return 0;
}