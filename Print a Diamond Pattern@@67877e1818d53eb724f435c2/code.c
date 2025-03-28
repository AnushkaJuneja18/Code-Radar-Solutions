// Your code here...

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Upper half of the diamond (including the middle row)
    for (int i = 1; i <= n; i++) {
        // Print spaces before stars
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }
    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces before stars
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}