#include<stdio.h>

int main() {
    char ch;
    printf("");
    scanf("%c", &ch);
    switch(ch) {
        case 'R' : printf("Stop \n");
            break;
        case 'G' : printf("Go \n");
            break;
        case 'Y' : printf("Slow Down \n");
            break;
        default : printf("Invalid input");
    }
    return 0;
}