#include<stdio.h>

int main() {
    int a;
    printf("");
    scanf("%d \n", &a);
    if((a >= 1) && (a <= 100)) {
        printf("In Range \n");
    }
    else {
        printf("Out of Range \n");
    }
    return 0;
}