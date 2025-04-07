// Your code here...
#include<stdio.h>
#include<string.h>

int countVowels(char str[]);
int main() {
    char str[100];
    scanf("%s", str);
    printf("%d", countVowels(str));
}
int countVowels(char str[]) {
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' ||str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }
    return count;
}