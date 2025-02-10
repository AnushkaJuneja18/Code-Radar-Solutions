#include<stdio.h>

int main() {
    int a;
    printf("");
    scanf("%d", &a);
    if((a % 1 == 0) && (a > 0)) {
        printf("Prime \n");
    }
    else {
        printf("Not Prime \n");
    }
    return 0;
}