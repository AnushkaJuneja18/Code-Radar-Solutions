// Your code here...
void selectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int min = arr[i];
        int mindex = i;
        for(int j = i; j < n; j++) {
            if(min > arr[j]) {
                min = arr[j];
                mindex = j;
            }
        }
        int temp = arr[minidex];
        arr[minidex] = arr[i];
        arr[i] = temp;
    }
}
int printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}