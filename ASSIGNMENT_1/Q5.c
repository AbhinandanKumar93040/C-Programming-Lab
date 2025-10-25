#include <stdio.h>
int main() {
    int number, sum;
    printf("enter the number:");
    scanf("%d", &number);
    sum=number*(number+1)/2;
    printf("%d", sum);
    return 0;    
}
