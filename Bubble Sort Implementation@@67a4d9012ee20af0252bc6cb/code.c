// Your code here...

#include<stdio.h>

int bubblesort(int n);

int main() {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j <n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                int[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}