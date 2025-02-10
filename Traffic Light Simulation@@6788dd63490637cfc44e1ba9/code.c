#include<stdio.h>

int main() {
    char ch;
    printf("");
    scanf("%c \n", &ch);
    if('R') {
        printf("Stop \n");
    }
    else if('G') {
        printf("Go \n");
    }
    else if('Y') {
        printf("Slow Down \n");
    }
    else {
        printf("Invalid input \n");
    }
    return 0;
}