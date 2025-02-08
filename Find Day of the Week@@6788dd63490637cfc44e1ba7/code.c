#include<stdio.h>

int main() {
    char day;
    printf("");
    scanf("%s", &day);
    switch(day) {
        Case 1: printf("Monday \n");
            break;
        Case 2: printf("Tuesday \n");
            break;
        Case 3: printf("Wednesday \n");
            break;
        Case 4: printf("Thursday \n");
            break;
        Case 5: printf("Friday \n");
            break;
        Case 6: printf("Saturday \n");
            break;
        Case 7: printf("Sunday \n");
            break;
        Default: printf("Invalid \n");
    }
    return 0;
}