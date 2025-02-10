#include<stdio.h>

int main() {
    char ch;
    printf("");
    scanf("%c \n", &ch);
    if('R') {
        printf("Stop");
    }
    else if('G') {
        printf("Go");
    }
    else if('Y') {
        printf("Slow Down");
    }
    else {
        printf("Invalid input");
    }
    return 0;
}