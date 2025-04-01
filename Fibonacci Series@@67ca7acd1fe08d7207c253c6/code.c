// Your code here...
void fibonacciSeries(int n) {
    int first = 0, second = 1, next;


    for(int i = 0; i < n; i++) {
        printf("%d", first);
        if(i < n-1) {
            printf(" ");
        }
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}