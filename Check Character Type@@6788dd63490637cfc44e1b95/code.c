#include<stdio.h>

int main() {
    char ch;
    printf("");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel \n");
    }
    else if (isdigit(ch)) {
        printf("Digit \n");
    }
    else if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
        printf("Consonant \n");
    }
    else {
        printf("Special Character \n");
    }
    return 0;
}