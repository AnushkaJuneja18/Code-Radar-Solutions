#include<stdio.h>

int main() {
    int a, b;
    char op;
    printf("");
    if (scanf("%d %d %c", &a, &b, &op)!= 3) {
        printf("Error \n");
        return 1;
    }
    switch(op) {
        case '+' : printf("%d \n", a + b);
            break;
        case '-' : printf("%d \n", a - b);
            break;
        case '*' : printf("%d \n", a * b);
            break;
        case '/' :
                if(b == 0) {
                    printf("Error \n");
                }
                else {
                    printf("%d \n", a / b);
                }
            break;
        default : printf("error \n");
            break;
    }
    return 0;
}