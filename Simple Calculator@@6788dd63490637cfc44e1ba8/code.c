#include<stdio.h>

int main() {
    int a, b;
    char op;
    printf("");
    if (scanf("%d %d %c", &a, &b, &op)!= 3) {
        printf("Error");
        return 1;
    }
    switch(op) {
        case '+' : printf("%d", a + b);
            break;
        case '-' : printf("%d", a - b);
            break;
        case '*' : printf("%d", a * b);
            break;
        case '/' :
                if(b == 0) {
                    printf("Error \n");
                }
                else {
                    printf("%d", a / b);
                }
            break;
        default : printf("Error");
    }
    return 0;
}