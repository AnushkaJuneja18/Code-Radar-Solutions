// Your code here...

#include<stdio.h>
int main() {
    int arr[n];
    int max = arr[0];
    for(int i = 1; i <= n; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    printf("%d", max);
    return 0;
}