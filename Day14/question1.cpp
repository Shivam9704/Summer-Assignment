#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 25, 30, 45, 50};
    int n = 5, key = 30, foundAt = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            foundAt = i;
            break;
        }
    }

    if(foundAt != -1) cout << "Element found at index: " << foundAt;
    else cout << "Element not found";
    return 0;
}