#include <iostream>
using namespace std;

int main() {
    int n = 5, i = n;
    while (i >= 1) {
        int j = 1;
        while (j <= n - i) { cout << " "; j++; }
        j = 1;
        while (j <= 2 * i - 1) { cout << "*"; j++; }
        cout << endl;
        i--;
    }
    return 0;
}