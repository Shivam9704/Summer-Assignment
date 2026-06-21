#include <iostream>
using namespace std;

bool isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) sum += i;
    }
    return sum == n;
}

int main() {
    int num = 28;
    if (isPerfect(num)) cout << num << " is a Perfect number.";
    else cout << num << " is not a Perfect number.";
    return 0;
}