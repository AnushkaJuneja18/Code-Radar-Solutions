#include<stdio.h>

int main() {
    int a, b, c;
    printf("");
    scanf("%d %d %d"b, &a, &b, &c);
    if(a == b == c) {
        printf("Equilateral \n");
    }
    else if((a == b != c) || (b == c != a) || (c == a != b)) {
        printf("Isoceles \n");
    }
    else {
        printf("Scalene \n");
    }
    return 0;
}