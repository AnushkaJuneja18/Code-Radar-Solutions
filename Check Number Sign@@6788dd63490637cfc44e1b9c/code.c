#include<stdio.h>

int main() {
    int a;
    printf("");
    scanf("%d \n", &a);
    if (a > 0) {
        printf("Positive \n");
    }
    else if (a < 0) {
        printf("Negative \n");
    }
    else {
        printf("Zero \n")
    }
    return 0;
}