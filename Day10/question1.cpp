#include <iostream>
using namespace std;

int main() {
    int n = 5, i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n - i) { cout << " "; j++; }
        j = 1;
        while (j <= 2 * i - 1) { cout << "*"; j++; }
        cout << endl;
        i++;
    }
    return 0;
}