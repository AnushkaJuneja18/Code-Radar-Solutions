#include<stdio.h>

int main() {
    char ch;
    printf("");
    scanf("%c", &ch);
    switch(ch) {
        case 'A' : printf("Excellent \n");
            break;
        case 'B' : printf("Good \n");
            break;
        case 'C' : printf("Average \n");
            break;
        case 'D' : printf("Below Average \n");
            break;
        case 'F' : printf("Fail \n");
            break;
        default : printf("Invalid grade \n");
    }
    return 0;
}