#include<stdio.h>
# include<ctype.h>
int main() {
    char ch;
    printf("");
    scanf("%c", &ch);
    if (ch >= 0 && ch <= 9) {
        printf("Digit \n");
    }
    else if (ch >= a && ch <= z) {
        printf("Special Character \n");
    }
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel \n");
    }
    else {
        printf("Consonant \n");
    }
    return 0;
}