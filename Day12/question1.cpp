#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int reversed = 0, original = n, remainder;
    while (n > 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int num = 121;
    if (isPalindrome(num)) cout << num << " is a Palindrome.";
    else cout << num << " is not a Palindrome.";
    return 0;
}