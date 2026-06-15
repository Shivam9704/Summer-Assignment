#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0, remainder, originalNum;
    cout << "Enter an integer: ";
    cin >> num;
    
    originalNum = num;
    int temp = num;
    
    while (temp > 0) {
        remainder = temp % 10;
        reversedNum = reversedNum * 10 + remainder;
        temp /= 10;
    }
    
    if (originalNum == reversedNum)
        cout << originalNum << " is a palindrome." << endl;
    else
        cout << originalNum << " is not a palindrome." << endl;
        
}