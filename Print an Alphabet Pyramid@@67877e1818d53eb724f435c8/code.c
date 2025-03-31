// Your code here...

#include<stdio.h>

int main() {
    int n;
    printf("");
    scanf("%d", &n);
    int nst = 1;
    for(int i = 1; i <= n; i++) {
        char ch = 'A';
        for(int j = 0; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}