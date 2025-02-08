#include<stdio.h>

int main() {
    int CP, SP;
    printf("");
    scanf("%d %d", &CP, &SP);
    if(CP < SP) {
        printf("Profit \n");
    }
    else if(CP > SP) {
        printf("Loss \n");
    }
    else {
        printf("No Profit No Loss \n");
    }
    return 0;
}