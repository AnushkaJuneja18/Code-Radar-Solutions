// Your code here...
#includee<stdio.h>

int palindrome(int arr[], int n);

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if(palindrome(arr, n)) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}

int palindrome(int arr[], int n) {
    for(int i = 0; i < n/2; i++) {
        if(arr[i] != arr[n-i-1]) {
            return 0;
        }
    }
    return 1;
}