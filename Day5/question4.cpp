#include <iostream>
using namespace std;

int main() {
    long long n, maxPrime = -1;
    cout << "Enter a number: ";
    cin >> n;

    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }

    if (n > 2) maxPrime = n;

    cout << "Largest Prime Factor is: " << maxPrime;
    return 0;
}