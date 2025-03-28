// Your code here...

#include<stdio.h>

int main() {
    int n;
    printf("");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    bubble sort(arr, n);
    printArray(arr, n);
    return 0;
}