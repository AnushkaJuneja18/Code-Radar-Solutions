// Your code here...
#include<stdio.h>

int countOdd(int arr[], int n);
int countEven(int arr[], int n);

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    count(arr, n);
    printf("%d %d", countEven(arr, n), countOdd(arr, n));
    return 0;
}

int countOdd(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

int countEven(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}