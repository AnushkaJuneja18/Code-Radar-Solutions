#include<stdio.h>

int main() {
    int a, b, c;
    printf("");
    scanf("%d %d %d", &a, &b, &c);
    if(a == b == c) {
        printf("Equilateral \n");
    }
    else if(a != b != c) {
        printf("Scalene \n");
    }
    else {
        printf("Isoceles \n");
    }
    return 0;
}