// Your code here...

#include<stdio.h>
int main() {
    int n;
    printf("");
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    for(int i = 0; i <= n-1; i++) {
        sum = sum + arr[i];
    }
    printf("%d", sum);
}