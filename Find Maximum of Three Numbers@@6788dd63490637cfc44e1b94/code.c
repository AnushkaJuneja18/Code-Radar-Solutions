#include<stdio.h>

int main() {
    int a, b, c;
    printf("");
    scanf("%d %d %d", &a, &b, &c);
    if(a >= b & a >= c) {
        printf("a");
    }
    else if(b >= a & b >= c) {
        printf("b");
    }
    else {
        print("c");
    }
    return 0;
}