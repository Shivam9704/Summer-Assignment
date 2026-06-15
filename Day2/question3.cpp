#include <iostream>
using namespace std;

int main() {
    int num, product = 1;
    cout << "Enter a number: ";
    cin >> num;
    
    int temp = abs(num);
    if (temp == 0) product = 0;
    
    while (temp > 0) {
        product *= (temp % 10);
        temp /= 10;
    }
    
    cout << "Product of digits: " << product << endl;

}