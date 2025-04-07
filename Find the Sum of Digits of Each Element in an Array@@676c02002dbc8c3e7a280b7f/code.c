// Your code here...

#include<stdio.h>
int main() {
    int arr[100], int n;
    printf("");
    scanf("%d", &n);
    scanf("%d", arr[100]);
    int sum = 0;
    for(int i = 0; i <= n; i++) {
        sum = sum + arr[i];
    }
    printf("%d", sum);
}