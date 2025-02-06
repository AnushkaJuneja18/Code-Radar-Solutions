#include<stdio.h>

int main() {
    char ch;
    printf("");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase");
    }
    else {
        printf("Lowercase");
    }
    return 0;
}