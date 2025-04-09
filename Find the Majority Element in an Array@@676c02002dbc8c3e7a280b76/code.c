// Your code here...
#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 1; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for(int i = 1; i <= n/2; i++) {
        if(max < arr[i]) {
            max = arr[i];
            printf("%d", max); 
        }
    }
    return 0;
}