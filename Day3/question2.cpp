#include <iostream>
using namespace std;

bool checkPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int low, high;
    cout << "Enter low and high limits of the range: ";
    cin >> low >> high;
    
    cout << "Prime numbers between " << low << " and " << high << " are: ";
    for (int i = low; i <= high; i++) {
        if (checkPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}