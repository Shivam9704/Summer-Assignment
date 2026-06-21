#include <iostream>
using namespace std;

void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm = 0;
    for (int i = 1; i <= n; ++i) {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main() {
    int terms = 10;
    cout << "Fibonacci Series: ";
    printFibonacci(terms);
    return 0;
}