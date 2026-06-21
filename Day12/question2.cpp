#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int original = n, sum = 0, remainder;
    while (n > 0) {
        remainder = n % 10;
        sum += (remainder * remainder * remainder);
        n /= 10;
    }
    return original == sum;
}

int main() {
    int num = 153;
    if (isArmstrong(num)) cout << num << " is an Armstrong number.";
    else cout << num << " is not an Armstrong number.";
    return 0;
}