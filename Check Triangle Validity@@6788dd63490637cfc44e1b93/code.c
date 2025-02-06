#include<stdio.h>

int main() {
    int a, b, c;
    printf("");
    scanf("%d %d %d", &a, &b, &c);
    if (a^2 + b^2 = c^2 || b^2 + c^2 = a^2 || a^2 + c^2 = b^2) {
        printf("Valid \n");
    }
    else {
        printf("Invalid \n")
    }
    return 0;
}