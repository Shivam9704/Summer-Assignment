#include <stdio.h>

int main() {
    long long num;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &num);
    do {
        num /= 10;
        count++;
    } while (num != 0);
    printf("Total number of digits: %d\n", count);
    return 0;
}