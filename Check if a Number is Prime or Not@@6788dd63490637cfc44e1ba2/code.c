#include<stdio.h>
#include<math.h>
int main() {
    int a;
    printf("");
    scanf("%d", &a);
    if(a <= 1) {
        printf("Not Prime \n");
    }
    else if(a == 2) {
        printf("Prime \n");
    }
    else if(a % 2 == 0) {
        printf("Not Prime \n");
    }
    else if(a % 3 == 0) {
        printf("Not Prime \n");
    }
    else if(a % 5 == 0) {
        printf("Not Prime \n");
    }
    else if(a % 7 == 0) {
        printf("Not Prime \n");
    }
    else {
        printf("Prime \n");
    }
    return 0;
}