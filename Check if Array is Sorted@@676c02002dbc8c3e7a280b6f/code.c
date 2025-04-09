// Your code here...
#include<stdio.h>

int sorted(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1])
        return 0;
    }
    return 1;
}
int main() {
    int n;
    printf("");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if(sorted(arr, n)) {
        printf("Sorted \n");
    }
    else {
        printf("Not Sorted \n");
    }
    return 0;
}