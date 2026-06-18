#include <iostream>
using namespace std;

int main() {
    int n = 5, i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n - i) { cout << " "; j++; }
        char ch = 'A';
        j = 1;
        while (j <= i) { cout << ch++; j++; }
        ch -= 2;
        while (ch >= 'A') { cout << ch--; }
        cout << endl;
        i++;
    }
    return 0;
}