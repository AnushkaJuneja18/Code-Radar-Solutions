#include<stdio.h>

int main() {
    char ch;
    printf("");
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9') {
        printf("Digit \n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel \n");
        }
        else {
            printf("Consonant \n");
        }
        else {
        printf("Special Character");
        }
    }
    return 0;
}