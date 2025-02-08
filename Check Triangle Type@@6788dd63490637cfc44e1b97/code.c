#include<stdio.h>

int main() {
    int a, b, c;
    printf("");
    scanf("%d %d %d"b, &a, &b, &c);
    if((a == b) && (b == c) && (a == c)) {
        printf("Equilateral \n");
    }
    else if((b != c) && (c != a) && (a != b)) {
        printf("Scalene \n");
    }
    else {
        printf("Isosceles \n");
    }
    return 0;
}