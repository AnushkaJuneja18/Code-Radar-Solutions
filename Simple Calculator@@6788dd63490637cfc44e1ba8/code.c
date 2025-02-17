#include<stdio.h>

int main() {
    int a, b;
    char op;
    printf("");
    if (scanf("%d %d %c", &a, &b, &op)!= 3) {
        printf("Error \n");
    }
    switch(op) {
        case '+' : printf("%d \n", a + b);
            break;
        case '-' : printf("%d \n", a - b);
            break;
        case '*' : printf("%d \n", a * b);
            break;
        case '/' : printf("%d \n", a / b);
            break;
        default : printf("error \n");
    }
    return 0;
}