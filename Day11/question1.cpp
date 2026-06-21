#include <iostream>
using namespace std;

int findSum(int a, int b) {9
    
    return a + b;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum: " << findSum(num1, num2) << endl;
    return 0;
}