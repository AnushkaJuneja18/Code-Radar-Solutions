// Your code here...
#include<stdio.h>
#include<string.h>

void countVowels(char str[]);
int main() {
    char str[100];
    printf("%d", countVowels(str));
}
void countVowels(char str[]) {
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
    }
    return count;
}