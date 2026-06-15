#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int originalNum = num, remainder, n = 0;
    double result = 0.0;
    
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    
    return ((int)result == num);
}

int main() {
    int low, high;
    cout << "Enter low and high limits of the range: ";
    cin >> low >> high;
    
    cout << "Armstrong numbers in the range are: ";
    for (int i = low; i <= high; ++i) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}